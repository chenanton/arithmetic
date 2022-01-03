#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>

#include "App.hh"
#include "Question.hh"
#include "QuestionGenerator.hh"

App::App() : DURATION(std::chrono::seconds(120)), score(0), gameOver(false) {}

App::App(int duration)
    : DURATION(std::chrono::seconds(duration)), score(0), gameOver(false) {}

void App::startGame() {
  initGame();
  runGame();
}

void App::initGame() {
  this->score = 0;
  this->gameOver = false;
}

void App::runGame() {
  std::thread userThread(&App::questionUser, this);
  std::this_thread::sleep_for(this->DURATION);

  this->mu.lock();
  gameOver = true;
  this->mu.unlock();
  userThread.join();

  std::cout << "Score: " << this->score << std::endl;
}

void App::questionUser() {
  Question* q;
  while (true) {
    this->mu.lock();
    if (gameOver) break;
    this->mu.unlock();

    q = this->qg.getQuestion();
    q->print();

    int userAnswer;
    do {
      std::cout << ">>> ";
      std::cin >> userAnswer;
    } while (!q->checkAnswer(userAnswer));

    this->score++;
  }
}
