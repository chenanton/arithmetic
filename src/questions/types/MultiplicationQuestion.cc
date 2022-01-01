#include "MultiplicationQuestion.hh"
#include "Question.hh"

MultiplicationQuestion::MultiplicationQuestion(int arg1, int arg2, int answer)
    : Question(arg1, arg2, answer) {}

char MultiplicationQuestion::getOperator() { return '*'; }
