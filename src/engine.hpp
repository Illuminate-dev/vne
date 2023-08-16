#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <SFML/Graphics.hpp>

class Engine {
public:
  Engine();
  void run();
  void setTitle(std::string title);

private:
  sf::RenderWindow window;
  sf::Texture backgroundTexture;
  sf::Sprite backgroundSprite;
  std::string title;
  void processEvent(sf::Event event);
  void handleInput(sf::Keyboard::Key key);
  void update();
  void render();
};

#endif
