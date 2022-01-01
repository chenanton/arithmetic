#ifndef QUESTION_FACTORY_DIVISION_H
#define QUESTION_FACTORY_DIVISION_H

#include "DivisionQuestion.hh"
#include "MultiplicationQuestionFactory.hh"
#include "Question.hh"
#include "QuestionFactory.hh"

class DivisionQuestionFactory : public QuestionFactory {
  MultiplicationQuestionFactory* mqf;

 public:
  DivisionQuestionFactory();

 protected:
  std::pair<int, int> getArgs() override;
  int calculateAnswer(int arg1, int arg2) override;
  Question* constructQuestion(int arg1, int arg2, int answer) override;
};

#endif
