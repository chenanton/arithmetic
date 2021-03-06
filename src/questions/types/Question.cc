#include <iostream>

#include "Question.hh"

Question::Question(int arg1, int arg2, int answer)
    : arg1(arg1), arg2(arg2), answer(answer) {}

Question::~Question() {}

bool Question::checkAnswer(int userAnswer) { return userAnswer == answer; }

int Question::getArg1() { return arg1; }

int Question::getArg2() { return arg2; }

void Question::print() {
  std::cout << getArg1() << " " << getOperator() << " " << getArg2() << " = ? "
            << std::endl;
}
