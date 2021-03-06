#include "AdditionQuestion.hh"
#include "AdditionQuestionFactory.hh"
#include "Question.hh"

int AdditionQuestionFactory::calculateAnswer(int arg1, int arg2) {
  return arg1 + arg2;
}

Question* AdditionQuestionFactory::constructQuestion(int arg1, int arg2,
                                                     int answer) {
  return new AdditionQuestion(arg1, arg2, answer);
}

std::pair<int, int> AdditionQuestionFactory::getArgs() {
  std::uniform_int_distribution<int> distribution(minArg, maxArg);
  int arg1 = distribution(rng);
  int arg2 = distribution(rng);
  return std::pair<int, int>{arg1, arg2};
}
