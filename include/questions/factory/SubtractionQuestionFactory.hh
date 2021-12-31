#ifndef QUESTION_FACTORY_SUBTRACTION_H
#define QUESTION_FACTORY_SUBTRACTION_H

#include "questions/Question.hh"
#include "questions/SubtractionQuestion.hh"
#include "questions/factory/QuestionFactory.hh"

class SubtractionQuestionFactory : public QuestionFactory {
  const int minArg = 1;
  const int maxArg = 100;

 protected:
  std::pair<int, int> getArgs();
  int calculateAnswer(int arg1, int arg2) { return arg1 - arg2; }
  Question* constructQuestion(int arg1, int arg2, int answer) {
    return new SubtractionQuestion(arg1, arg2, answer);
  }
};

#endif
