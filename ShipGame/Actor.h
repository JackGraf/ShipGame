#pragma once
#include <SDL.h>
#include <vector>

struct Vector2
{
	float x;
	float y;
};

class Actor
{
public:
	enum State
	{
		ACTIVE,
		PAUSED,
		DEAD
	};

	Actor(class Game* game);
	virtual ~Actor();

	void Update(float deltaTime);
	void UpdateComponents(float deltaTime);
	void UpdateActor(float deltaTime);

	void AddComponent(class Component* component);
	void RemoveComponent(class Component* component);

private:
	State mState;
	Vector2 mPosition;
	float mScale;
	float mRotation;
	std::vector<class Component*> mComponents;
	class Game* mGame;
};