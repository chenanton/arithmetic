#include "questions/Question.hh"
#include "questions/SubtractionQuestion.hh"
#include "questions/factory/SubtractionQuestionFactory.hh"

std::pair<int, int> SubtractionQuestionFactory::getArgs() {
  std::uniform_int_distribution<int> distribution(minArg, maxArg);
  int diff = distribution(rng);
  int arg2 = distribution(rng);
  int arg1 = diff + arg2;
  return std::pair<int, int>{arg1, arg2};
}

inline int SubtractionQuestionFactory::calculateAnswer(int arg1, int arg2) {
  return arg1 - arg2;
}

Question* SubtractionQuestionFactory::constructQuestion(int arg1, int arg2,
                                                        int answer) {
  return new SubtractionQuestion(arg1, arg2, answer);
}
