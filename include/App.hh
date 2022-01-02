#include <chrono>

#include "Question.hh"
#include "QuestionGenerator.hh"

class App {
  const int DURATION = 120;
  int score = 0;

  QuestionGenerator qg;
  Question* curQuestion;

 public:
  App();
  ~App();
  void startGame();

 private:
  void runGame();
  void clearGame();

  int gameDuration(std::chrono::time_point<std::chrono::high_resolution_clock>)
};
