#include "Question.hh"
#include "SubtractionQuestion.hh"

SubtractionQuestion::SubtractionQuestion(int arg1, int arg2, int answer)
    : Question(arg1, arg2, answer) {}

inline char SubtractionQuestion::getOperator() { return '-'; }
