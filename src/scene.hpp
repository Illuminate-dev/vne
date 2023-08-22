#ifndef SCENE_HPP
#define SCENE_HPP

#include "background.hpp"
#include "character.hpp"
#include "textbox.hpp"
#include <SFML/Graphics.hpp>

class Scene {
public:
  Scene();
  Scene(sf::Image bg_image, std::vector<Character *> characters, TextBox text);

  void setBackground(sf::Image bg_image);
  std::vector<Character *> &getCharacters();
  void setText(std::string text);
  void render(sf::RenderWindow &window);

private:
  Background background;
  std::vector<Character *> characters;
  TextBox text;
};

#endif // SCENE_HPP
