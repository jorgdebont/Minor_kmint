#include "ExampleGameObject.h"
#include <SDL2/SDL_render.h>

ExampleGameObject::ExampleGameObject() {
    this->SetTexture(mApplication->LoadTexture("lemmling_Cartoon_cow.png"));
    this->SetSize(50, 50);
}

ExampleGameObject::~ExampleGameObject() {
    SDL_DestroyTexture(this->GetTexture());
}

void ExampleGameObject::Update(float deltaTime) {
    (void)deltaTime;
    const int x = (int)(sin(mApplication->GetTimeSinceStartedMS() / 300.0) * 200.0 + 250);
    const int y = (int)(cos(mApplication->GetTimeSinceStartedMS() / 300.0) * 200.0 + 250);
    SetOffset(x, y);
}
