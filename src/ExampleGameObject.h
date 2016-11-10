#pragma once

#include "IGameObject.h"

class ExampleGameObject : public IGameObject {
public:
	ExampleGameObject();
	~ExampleGameObject();
	void Update(float deltaTime);

private:
	SDL_Texture *texture;
};