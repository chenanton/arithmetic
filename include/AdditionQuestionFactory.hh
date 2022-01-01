#ifndef QUESTION_FACTORY_ADDITION_H
#define QUESTION_FACTORY_ADDITION_H

#include "AdditionQuestion.hh"
#include "Question.hh"
#include "QuestionFactory.hh"

class AdditionQuestionFactory : public QuestionFactory {
  const int minArg = 1;
  const int maxArg = 100;

 protected:
  std::pair<int, int> getArgs() override;
  int calculateAnswer(int arg1, int arg2) override;
  Question* constructQuestion(int arg1, int arg2, int answer) override;
};

#endif
