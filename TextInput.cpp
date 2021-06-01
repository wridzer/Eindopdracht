//
// Created by wridz on 27/05/2021.
//

#include "TextInput.h"

TextInput::TextInput(std::string text, sf::Color color, int fontSize, Vector2 position)
{
<<<<<<< HEAD
    sf::Text inputText;
=======
>>>>>>> parent of 29d6740 (text)
    sf::Font font;
    font.loadFromFile("../Font/Starjhol.ttf");
    inputText.setString(text);
    inputText.setFont(font);
    inputText.setCharacterSize(fontSize);
    inputText.setFillColor(color);
    inputText.setPosition(position.GetX(), position.GetY());
}

TextInput::~TextInput() {

}

<<<<<<< HEAD

sf::Text& TextInput::operator=(const TextInput v2) {
=======
sf::Text TextInput::drawText()
{

>>>>>>> parent of 29d6740 (text)
    return inputText;
}