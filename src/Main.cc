#include <iostream>

#include "QuestionGenerator.hh"

int main() {
  QuestionGenerator qg;
  for (int i = 0; i < 10; i++) {
    Question* q = qg->getQuestion();
    std::cout << "Question " << i << ": " << q->getArg1() << " "
              << q->getOperator() << " " << q->getArg2() << std::endl;
  }
  return 0;
}
