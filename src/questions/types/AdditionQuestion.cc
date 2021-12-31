#include "questions/AdditionQuestion.hh"
#include "questions/Question.hh"

AdditionQuestion::AdditionQuestion(int arg1, int arg2, int answer)
    : Question(arg1, arg2, answer) {}

inline char AdditionQuestion::getOperator() { return '+'; }
