#ifndef SUBTRACTION_QUESTION_H
#define SUBTRACTION_QUESTION_H

#include "Question.hh"

class SubtractionQuestion : public Question {
 public:
  SubtractionQuestion(int arg1, int arg2, int answer);
  char getOperator();
};

#endif
