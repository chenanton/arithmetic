#ifndef QUESTION_FACTORY_MULTIPLICATION_H
#define QUESTION_FACTORY_MULTIPLICATION_H

#include "MultiplicationQuestion.hh"
#include "Question.hh"
#include "QuestionFactory.hh"

class MultiplicationQuestionFactory : public QuestionFactory {
  const int minArg1 = 2;
  const int maxArg1 = 100;
  const int minArg2 = 2;
  const int maxArg2 = 12;

 protected:
  std::pair<int, int> getArgs() override;
  int calculateAnswer(int arg1, int arg2) override;
  Question* constructQuestion(int arg1, int arg2, int answer) override;
};

#endif
