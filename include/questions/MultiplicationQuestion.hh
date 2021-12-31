#ifndef MULTIPLICATION_QUESTION_H
#define MULTIPLICATION_QUESTION_H

#include "questions/Question.hh"

class MultiplicationQuestion : public Question {
 public:
  MultiplicationQuestion(int arg1, int arg2, int answer);
  char getOperator();
};

#endif
