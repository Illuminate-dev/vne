#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <SFML/Graphics.hpp>

class Character {
public:
  Character();
  Character(std::string name, sf::Image image);
  void render(sf::RenderWindow &window);
  void setTexture(sf::Image image);
  void setName(std::string name);

private:
  sf::Texture characterTexture;
  sf::Sprite characterSprite;
  std::string name;
};

#endif
