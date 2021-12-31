#ifndef QUESTION_FACTORY_ADDITION_H
#define QUESTION_FACTORY_ADDITION_H

#include "questions/AdditionQuestion.hh"
#include "questions/Question.hh"
#include "questions/factory/QuestionFactory.hh"

class AdditionQuestionFactory : public QuestionFactory {
  const int minArg = 1;
  const int maxArg = 100;

 protected:
  std::pair<int, int> getArgs();
  int calculateAnswer(int arg1, int arg2);
  Question* constructQuestion(int arg1, int arg2, int answer);
};

#endif
