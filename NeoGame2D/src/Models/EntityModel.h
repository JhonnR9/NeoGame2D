#pragma once
#include "TransformModel.h"

class EntityModel
{
	TransformModel tranform;

public:
	EntityModel();

	void fixedUpdate();
	void update();

	TransformModel getTransform();

	
};

