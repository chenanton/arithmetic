#include <iostream>

#include "App.hh"

int main() {
  int duration;
  std::cout << "Set time: " << std::endl;
  std::cin >> duration;

  App app(duration);
  app.startGame();
  return 0;
}
