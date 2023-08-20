#ifndef TEXTBOX_HPP
#define TEXTBOX_HPP

#include <SFML/Graphics.hpp>

class TextBox {
public:
  TextBox();
  TextBox(std::string text);
  void render(sf::RenderWindow &window);
  void setText(std::string newText);

private:
  sf::Font font;
  sf::Text text;
  sf::RectangleShape background;
};

#endif
