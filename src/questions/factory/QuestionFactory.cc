#include <random>
#include <utility>

#include "Question.hh"
#include "QuestionFactory.hh"

QuestionFactory::QuestionFactory() {
  std::random_device rd;
  std::mt19937 rng(rd());
  this->rng = rng;
}

QuestionFactory::~QuestionFactory() {}

Question* QuestionFactory::getQuestion() {
  std::pair<int, int> args = getArgs();
  int answer = calculateAnswer(args.first, args.second);
  return constructQuestion(args.first, args.second, answer);
}
