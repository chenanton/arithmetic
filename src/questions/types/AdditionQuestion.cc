#include "AdditionQuestion.hh"
#include "Question.hh"

AdditionQuestion::AdditionQuestion(int arg1, int arg2, int answer)
    : Question(arg1, arg2, answer) {}

char AdditionQuestion::getOperator() { return '+'; }
