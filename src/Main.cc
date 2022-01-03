#include <iostream>

#include "App.hh"

int main() {
  int duration;
  std::cout << "ARITHMETIC" << std::endl << "Set time: (s)" << std::endl;
  std::cin >> duration;

  App app(duration);
  app.startGame();
  return 0;
}
