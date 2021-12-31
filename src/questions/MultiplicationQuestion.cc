#include "questions/MultiplicationQuestion.hh"
#include "questions/Question.hh"

MultiplicationQuestion::MultiplicationQuestion(int arg1, int arg2, int answer)
    : Question(arg1, arg2, answer) {}

inline char MulplicationQuestion::getOperator() { return '*'; }
