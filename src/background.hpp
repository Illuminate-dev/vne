#ifndef BACKGROUND_HPP
#define BACKGROUND_HPP

#include <SFML/Graphics.hpp>

class Background {
public:
  Background();
  void render(sf::RenderWindow &window);
  void setTexture(sf::Image image);

private:
  sf::Texture backgroundTexture;
  sf::Sprite backgroundSprite;
};
#endif
