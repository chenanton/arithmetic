#ifndef DIVISION_QUESTION_H
#define DIVISION_QUESTION_H

#include "Question.hh"

class DivisionQuestion : public Question {
 public:
  DivisionQuestion(int arg1, int arg2, int answer);
  char getOperator() override;
};

#endif
