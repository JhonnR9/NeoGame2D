#pragma once
#include "../Models/EntityModel.h"
#include "../Views/EntityView.h"
class EntityController
{
public:

	EntityController(EntityModel& model, EntityView& view);
	virtual void update(){}
};

