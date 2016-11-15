#include "ExampleGameObject.h"
#include <SDL2/SDL_render.h>

ExampleGameObject::ExampleGameObject() {
    texture = mApplication->LoadTexture("lemmling_Cartoon_cow.png");
    this->SetTexture(texture);
    this->SetSize(50, 50);
}

ExampleGameObject::~ExampleGameObject() {
    SDL_DestroyTexture(texture);
}

void ExampleGameObject::Update(float deltaTime) {
    (void)deltaTime;
    const int x = (int)(sin(mApplication->GetTimeSinceStartedMS() / 300.0) * 15.0 + 400);
    SetOffset(x, 250);
}
