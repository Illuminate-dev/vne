#include "background.hpp"

#include <iostream>

Background::Background() {}

Background::Background(sf::Image image) {
  backgroundTexture.loadFromImage(image);
  backgroundSprite.setTexture(backgroundTexture);
}

void Background::render(sf::RenderWindow &window) {
  sf::Vector2f target(window.getSize());
  backgroundSprite.setPosition(
      target.x / 2 - backgroundSprite.getLocalBounds().width / 2,
      target.y / 2 - backgroundSprite.getLocalBounds().height / 2);
  window.draw(backgroundSprite);
}

void Background::setTexture(sf::Image image) {
  backgroundTexture.loadFromImage(image);
  backgroundSprite.setTexture(backgroundTexture);
}
