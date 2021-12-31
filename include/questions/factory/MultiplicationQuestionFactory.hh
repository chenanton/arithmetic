#ifndef QUESTION_FACTORY_MULTIPLICATION_H
#define QUESTION_FACTORY_MULTIPLICATION_H

#include "questions/MultiplicationQuestion.hh"
#include "questions/Question.hh"
#include "questions/factory/QuestionFactory.hh"

class MultiplicationQuestionFactory : public QuestionFactory {
  const int minArg1 = 1;
  const int maxArg1 = 100;
  const int minArg2 = 1;
  const int maxArg2 = 12;

 protected:
  std::pair<int, int> getArgs();
  int calculateAnswer(int arg1, int arg2);
  Question* constructQuestion(int arg1, int arg2, int answer);
};

#endif
