#include "engine.hpp"
#include <iostream>

Engine::Engine() {
  title = "Visual Novel Engine";
  if (!backgroundTexture.loadFromFile("res/lycoris_recoil.png")) {
    std::cerr << "Error loading background texture" << std::endl;
    std::exit(1);
  };
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
  sf::Sprite backgroundSprite;
  backgroundSprite.setTexture(backgroundTexture);

  // scale to window size

  sf::Vector2f target(window.getSize());

  // float scaleX = target.x / backgroundSprite.getLocalBounds().width;
  // float scaleY = target.y / backgroundSprite.getLocalBounds().height;
  //
  // if (scaleX < scaleY) {
  //   scaleX = scaleY;
  // } else {
  //   scaleY = scaleX;
  // }
  // if (scaleX != scaleY) {
  //   scaleX = scaleY;
  // }
  // backgroundSprite.setScale(scaleX, scaleY);

  // center the sprite
  backgroundSprite.setPosition(
      target.x / 2 - backgroundSprite.getLocalBounds().width / 2,
      target.y / 2 - backgroundSprite.getLocalBounds().height / 2);

  window.draw(backgroundSprite);
  window.display();
}
