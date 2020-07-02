#pragma once
#include "Component.h"
#include "RigidBody.h"

class ReactionComp : Component
{
	// Inherited via Component
	virtual void OnUpdate(float deltaTime) override;
	virtual void OnRender() override;
	
	void OnCollide(RigidBody r);
};

