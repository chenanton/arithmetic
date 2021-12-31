#ifndef ADDITION_QUESTION_H
#define ADDITION_QUESTION_H

#include "Question.hh"

class AdditionQuestion : public Question {
 public:
  AdditionQuestion(int arg1, int arg2, int answer);
  char getOperator();
};

#endif
