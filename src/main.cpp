#include <iostream>
#include "Config.h"
#include "FWApplication.h"
#include <SDL2/SDL_events.h>
#include "SDL2/SDL_timer.h"
#include <time.h>
#include "RandomUtil.hpp"
#include "GameObjects/Cow/Cow.hpp"

#include "ExampleGameObject.h"
#include "graph/SummonersRift.hpp"
#include "RandomUtil.hpp"
#include "GameObjects/Buney.hpp"

const int turn_delay_ms = 100;

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
    // ExampleGameObject *example = new ExampleGameObject();
    // application->AddRenderable(example);

    SummonersRift rift;
    application->AddRenderable(&rift);

    Buney rabbit(rift.field, nullptr);
    application->AddRenderable(&rabbit);

    Cow kauw(rift.field, &rabbit);
    application->AddRenderable(&kauw);

    uint32_t last_turn_timestamp_ms = application->GetTimeSinceStartedMS();

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

        // We make sure turns only get taken every `turn_delay_ms` miliseconds
        uint32_t current_time = application->GetTimeSinceStartedMS();
        if (current_time > last_turn_timestamp_ms + turn_delay_ms) {

            application->UpdateGameObjects();

            last_turn_timestamp_ms = current_time;
        }
        application->RenderGameObjects();
        application->EndTick();
        // For the background
        application->SetColor(Color(255, 255, 255, 255));
    }
        
    return EXIT_SUCCESS;
}
