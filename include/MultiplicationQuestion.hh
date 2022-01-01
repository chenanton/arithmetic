#ifndef MULTIPLICATION_QUESTION_H
#define MULTIPLICATION_QUESTION_H

#include "Question.hh"

class MultiplicationQuestion : public Question {
 public:
  MultiplicationQuestion(int arg1, int arg2, int answer);
  char getOperator() override;
};

#endif
