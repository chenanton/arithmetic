#include "questions/DivisionQuestion.hh"
#include "questions/Question.hh"
#include "questions/factory/DivisionQuestionFactory.hh"

std::pair<int, int> DivisionQuestionFactory::getArgs() {
  std::uniform_int_distribution<int> arg2Distr(minArg, maxArg);
  std::uniform_int_distribution<int> quoDistr(minQuotient, maxQuotient);
  int arg2 = arg2Distr(rng);
  int quotient = quoDistr(rng);
  int arg1 = arg2 * quotient;
  return std::pair<int, int>{arg1, arg2};
}

inline int DivisionQuestionFactory::calculateAnswer(int arg1, int arg2) {
  return arg1 / arg2;
}

Question* DivisionQuestionFactory::constructQuestion(int arg1, int arg2,
                                                     int answer) {
  return new DivisionQuestion(arg1, arg2, answer);
}
