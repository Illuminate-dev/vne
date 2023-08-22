#include "scene.hpp"
#include <iostream>

Scene::Scene() {}

Scene::Scene(sf::Image bg, std::vector<Character *> characters, TextBox text) {
  this->background.setTexture(bg);
  this->characters = characters;
  this->text = text;
}

void Scene::setBackground(sf::Image bg) { this->background.setTexture(bg); }

std::vector<Character *> &Scene::getCharacters() { return characters; }

void Scene::setText(std::string text) { this->text.setText(text); }

void Scene::render(sf::RenderWindow &window) {
  background.render(window);
  // std::cout << characters.size() << std::endl;
  for (auto character : characters)
    character->render(window);
  text.render(window);
}
