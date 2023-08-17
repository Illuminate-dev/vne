#include "background.hpp"

#include <iostream>

Background::Background() {
  if (!backgroundTexture.loadFromFile("res/lycoris_recoil.png")) {
    std::cerr << "Error loading background texture" << std::endl;
    std::exit(1);
  };
  backgroundSprite.setTexture(backgroundTexture);
}

void Background::render(sf::RenderWindow &window) {
  sf::Vector2f target(window.getSize());
  backgroundSprite.setPosition(
      target.x / 2 - backgroundSprite.getLocalBounds().width / 2,
      target.y / 2 - backgroundSprite.getLocalBounds().height / 2);
  window.draw(backgroundSprite);
}