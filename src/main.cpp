#include <iostream>
#include "Config.h"
#include "FWApplication.h"
#include <SDL2/SDL_events.h>
#include "SDL2/SDL_timer.h"
#include <time.h>
#include "RandomUtil.hpp"
#include "GameObjects/Cow.hpp"

#include "ExampleGameObject.h"
#include "graph/SummonersRift.hpp"
#include "RandomUtil.hpp"
#include "GameObjects/Buney.hpp"


int main()
{
    //auto window = Window::CreateSDLWindow();
    auto application = new FWApplication();
    if (!application->GetWindow())
    {
        LOG("Couldn't create window...");
        return EXIT_FAILURE;
    }
    
    application->SetTargetFPS(60);
    application->SetColor(Color(255, 10, 40, 255));

    // Dancing cow
    ExampleGameObject *example = new ExampleGameObject();
    application->AddRenderable(example);

    SummonersRift rift;
    application->AddRenderable(&rift);

    Buney rabbit(rift.field, nullptr);
    application->AddRenderable(&rabbit);

    Cow kauw(rift.field, &rabbit);
    application->AddRenderable(&kauw);

    while (application->IsRunning())
    {
        application->StartTick();

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                application->Quit();
                break;
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym){

                default:
                    break;
                }
            }
        }

        application->UpdateGameObjects();
        application->RenderGameObjects();
        application->EndTick();
        // For the background
        application->SetColor(Color(255, 255, 255, 255));
    }
        
    return EXIT_SUCCESS;
}
