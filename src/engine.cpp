#include "engine.hpp"
#include <iostream>

Engine::Engine() {
  title = "Visual Novel Engine";

  sf::Image image;
  if (!image.loadFromFile("res/astolfo.png")) {
    std::cerr << "Error loading character texture" << std::endl;
    std::exit(1);
  }

  characters.push_back(new Character);
  characters.back()->setName("Astolfo");
  characters.back()->setTexture(image);
}

void Engine::setTitle(std::string title) { this->title = title; }

void Engine::run() {
  window.create(sf::VideoMode(1600, 900), title);
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event))
      processEvent(event);
    update();
    render();
  }
}

void Engine::processEvent(sf::Event event) {
  switch (event.type) {
  case sf::Event::Closed:
    window.close();
    break;
  case sf::Event::KeyPressed:
    handleInput(event.key.code);
    break;
  default:
    break;
  }
}

void Engine::handleInput(sf::Keyboard::Key key) {
  switch (key) {
  case sf::Keyboard::Escape:
    window.close();
    break;
  default:
    break;
  }
}

void Engine::update() {}

void Engine::render() {
  window.clear();
  background.render(window);
  for (auto &character : characters)
    character->render(window);
  window.display();
}
