#pragma once
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
class EntityView
{
	sf::Sprite sprite;

public:
	sf::Sprite getSprite();
	void setSprite(sf::Sprite sprite);
	void checkInputs();
};

