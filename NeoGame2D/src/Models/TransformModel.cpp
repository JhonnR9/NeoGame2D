#include "TransformModel.h"


TransformModel::TransformModel() {
	position = sf::Vector2f(0, 0);
	rotation = sf::Vector2f(0, 0);
	position = sf::Vector2f(1, 1);
}

sf::Vector2f TransformModel::getPosition()
{
	return this->position;
}

sf::Vector2f TransformModel::getRotation()
{
	return this->rotation;
}

sf::Vector2f TransformModel::getScale()
{
	return this->scale;
}

void TransformModel::setPosition(sf::Vector2f position)
{
	this->position = position;
}

void TransformModel::setRotation(sf::Vector2f rotation)
{
	this->rotation = rotation;
}

void TransformModel::setScale(sf::Vector2f scale)
{
	this->scale = scale;
}
