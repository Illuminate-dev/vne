#include "textbox.hpp"

TextBox::TextBox() {
  font.loadFromFile("res/arial.ttf");

  text.setFont(font);
  text.setFillColor(sf::Color::White);
  text.setCharacterSize(24);

  background.setFillColor(sf::Color(0, 0, 0, 255));
}

TextBox::TextBox(std::string newText) {
  font.loadFromFile("res/arial.ttf");

  text.setFont(font);
  text.setString(newText);
  text.setFillColor(sf::Color::White);
  text.setCharacterSize(24);

  background.setFillColor(sf::Color(0, 0, 0, 128));
}

void TextBox::setText(std::string newText) { text.setString(newText); }

void TextBox::render(sf::RenderWindow &window) {
  sf::Vector2f target(window.getSize());
  background.setSize(sf::Vector2f(target.x - 200, 200));
  background.setPosition(100, target.y - 250);
  text.setPosition(150, target.y - 225);
  window.draw(background);
  window.draw(text);
}
