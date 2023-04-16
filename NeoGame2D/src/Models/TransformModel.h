#pragma once

#include <SFML/System/Vector2.hpp>

class TransformModel
{
	sf::Vector2f position;
	sf::Vector2f rotation;
	sf::Vector2f scale;

public:
	TransformModel();

	sf::Vector2f getPosition();
	sf::Vector2f getRotation();
	sf::Vector2f getScale();

	void setPosition(sf::Vector2f position);
	void setRotation(sf::Vector2f rotation);
	void setScale(sf::Vector2f scale);

};

