#include "character.hpp"

Character::Character() {}

Character::Character(std::string name, sf::Image image) {
  this->name = name;
  characterTexture.loadFromFile("res/astolfo.png");
  characterSprite.setTexture(characterTexture);
}

void Character::render(sf::RenderWindow &window) {
  sf::Vector2f target(window.getSize());
  characterSprite.setPosition(
      target.x - characterSprite.getLocalBounds().getSize().x, 0);
  window.draw(characterSprite);
}

void Character::setTexture(sf::Image image) {
  characterTexture.loadFromImage(image);
  characterSprite.setTexture(characterTexture);
}

void Character::setName(std::string name) { this->name = name; }
