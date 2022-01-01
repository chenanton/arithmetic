#include "DivisionQuestion.hh"
#include "DivisionQuestionFactory.hh"
#include "MultiplicationQuestion.hh"
#include "MultiplicationQuestionFactory.hh"
#include "Question.hh"

DivisionQuestionFactory::DivisionQuestionFactory()
    : mqf(new MultiplicationQuestionFactory()) {}

std::pair<int, int> DivisionQuestionFactory::getArgs() {
  Question* mq = mqf->getQuestion();
  int arg1 = mq->getArg1() * mq->getArg2();
  int arg2 = mq->getArg2();
  return std::pair<int, int>{arg1, arg2};
}

int DivisionQuestionFactory::calculateAnswer(int arg1, int arg2) {
  return arg1 / arg2;
}

Question* DivisionQuestionFactory::constructQuestion(int arg1, int arg2,
                                                     int answer) {
  return new DivisionQuestion(arg1, arg2, answer);
}
