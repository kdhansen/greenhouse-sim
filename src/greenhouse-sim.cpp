#include "SFML/Graphics.hpp"

int main(int argc, char const *argv[])
{
  // create the window
  sf::RenderWindow window(sf::VideoMode(800, 600), "Tomato Simulator");
  window.setFramerateLimit(60);

  sf::Clock deltaClock;

  while (window.isOpen()) {

    // check all the window's events that were triggered since the last
    // iteration of the loop
    sf::Event event;
    while (window.pollEvent(event)) {
      // "close requested" event: we close the window
      if (event.type == sf::Event::Closed) window.close();
    }

    // clear the window with black color
    window.clear();

    // draw everything here...
    //window.draw(my_tomato_view);

    // end the current frame
    window.display();
  }

  return 0;
}
