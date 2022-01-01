#ifndef QUESTION_FACTORY_SUBTRACTION_H
#define QUESTION_FACTORY_SUBTRACTION_H

#include "AdditionQuestionFactory.hh"
#include "Question.hh"
#include "QuestionFactory.hh"
#include "SubtractionQuestion.hh"

class SubtractionQuestionFactory : public QuestionFactory {
  AdditionQuestionFactory* aqf;

 public:
  SubtractionQuestionFactory();

 protected:
  std::pair<int, int> getArgs() override;
  int calculateAnswer(int arg1, int arg2) override;
  Question* constructQuestion(int arg1, int arg2, int answer) override;
};

#endif
