#include <iostream>

#include "questions/Question.hh"
#include "questions/factory/AdditionQuestionFactory.hh"
#include "questions/factory/QuestionFactory.hh"

int main() {
  QuestionFactory* qf = new AdditionQuestionFactory();
  Question* q = qf->getQuestion();
  std::cout << "Question 1: " << q->getArg1() << q->getOperator()
            << q->getArg2() << std::endl;
  std::cout << q->checkAnswer(420) << std::endl;
  std::cout << q->checkAnswer(q->getArg1() + q->getArg2()) << std::endl;
}
