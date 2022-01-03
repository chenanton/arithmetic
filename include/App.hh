#include <chrono>
#include <mutex>

#include "Question.hh"
#include "QuestionGenerator.hh"

class App {
  const std::chrono::seconds DURATION;
  int score;

  QuestionGenerator qg;

  std::mutex mu;
  bool gameOver;

 public:
  App();
  App(int duration);
  void startGame();

 private:
  void initGame();
  void runGame();

  void questionUser();
};
