//
// Created by wridz on 27/05/2021.
//

#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "Vector2.h"


class TextInput {
public:
    TextInput(std::string text, sf::Color color, int fontSize, Vector2 position, sf::Text textElement);
    ~TextInput();
    sf::Text drawText(sf::Text inputText);
    sf::Text& operator=(const TextInput v2);
    //sf::Text inputText;
    sf::Text drawText(std::string stringInput);

};
