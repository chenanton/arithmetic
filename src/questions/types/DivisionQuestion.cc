#include "DivisionQuestion.hh"
#include "Question.hh"

DivisionQuestion::DivisionQuestion(int arg1, int arg2, int answer)
    : Question(arg1, arg2, answer) {}

inline char DivisionQuestion::getOperator() { return '/'; }