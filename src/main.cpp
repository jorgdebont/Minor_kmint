#include <iostream>
#include "Config.h"
#include "FWApplication.h"
#include <SDL2/SDL_events.h>
#include "SDL2/SDL_timer.h"
#include <time.h>

#include "ExampleGameObject.h"
#include "graph/SummonersRift.hpp"


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

        SummonersRift rift;

        // This is example code, replace with your own!


        // Text drawing
        application->SetColor(Color(0, 0, 0, 255));
        application->DrawText("Welcome to KMint", 400, 300);
        
        // Graph drawing
        application->SetColor(Color(0, 0, 0, 255));
        application->DrawLine(400, 350, 350, 400);
        application->DrawLine(350, 400, 450, 400);
        application->DrawLine(450, 400, 400, 350);

        application->SetColor(Color(0, 0, 255, 255));
        application->DrawCircle(400, 350, 10, true);
        application->DrawCircle(350, 400, 10, true);
        application->DrawCircle(450, 400, 10, true);

        // For the background
        application->SetColor(Color(255, 255, 255, 255));

        application->UpdateGameObjects();
        application->RenderGameObjects();
        application->EndTick();
    }
        
    return EXIT_SUCCESS;
}
