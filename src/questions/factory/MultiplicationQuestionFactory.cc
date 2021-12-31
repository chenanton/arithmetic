#include "questions/MultiplicationQuestion.hh"
#include "questions/Question.hh"
#include "questions/factory/MultiplicationQuestionFactory.hh"

std::pair<int, int> MultiplicationQuestionFactory::getArgs() {
  std::uniform_int_distribution<int> arg1Distr(minArg1, maxArg1);
  std::uniform_int_distribution<int> arg2Distr(minArg2, maxArg2);
  int arg1 = arg1Distr(rng);
  int arg2 = arg2Distr(rng);
  return std::pair<int, int>{arg1, arg2};
}

inline int MultiplicationQuestionFactory::calculateAnswer(int arg1, int arg2) {
  return arg1 * arg2;
}

Question* MultiplicationQuestionFactory::constructQuestion(int arg1, int arg2,
                                                           int answer) {
  return new MultiplicationQuestion(arg1, arg2, answer);
}
