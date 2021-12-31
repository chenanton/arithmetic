#ifndef QUESTION_FACTORY_DIVISION_H
#define QUESTION_FACTORY_DIVISION_H

#include "questions/DivisionQuestion.hh"
#include "questions/Question.hh"
#include "questions/factory/QuestionFactory.hh"

class DivisionQuestionFactory : public QuestionFactory {
  const int minArg = 1;
  const int maxArg = 100;
  const int minQuotient = 1;
  const int maxQuotient = 12;

 protected:
  std::pair<int, int> getArgs();
  int calculateAnswer(int arg1, int arg2);
  Question* constructQuestion(int arg1, int arg2, int answer);
};

#endif
