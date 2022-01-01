#include "AdditionQuestion.hh"
#include "AdditionQuestionFactory.hh"
#include "Question.hh"
#include "SubtractionQuestion.hh"
#include "SubtractionQuestionFactory.hh"

SubtractionQuestionFactory::SubtractionQuestionFactory()
    : aqf(new AdditionQuestionFactory()) {}

std::pair<int, int> SubtractionQuestionFactory::getArgs() {
  Question* aq = aqf->getQuestion();
  int arg1 = aq->getArg1() + aq->getArg2();
  int arg2 = aq->getArg2();
  return std::pair<int, int>{arg1, arg2};
}

int SubtractionQuestionFactory::calculateAnswer(int arg1, int arg2) {
  return arg1 - arg2;
}

Question* SubtractionQuestionFactory::constructQuestion(int arg1, int arg2,
                                                        int answer) {
  return new SubtractionQuestion(arg1, arg2, answer);
}
