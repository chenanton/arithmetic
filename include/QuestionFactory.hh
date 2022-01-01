#ifndef QUESTION_FACTORY_H
#define QUESTION_FACTORY_H

#include <random>
#include <utility>

#include "Question.hh"

class QuestionFactory {
 protected:
  std::mt19937 rng;

 public:
  Question* getQuestion();
  virtual ~QuestionFactory();

 protected:
  QuestionFactory();
  virtual std::pair<int, int> getArgs() = 0;
  virtual int calculateAnswer(int arg1, int arg2) = 0;
  virtual Question* constructQuestion(int arg1, int arg2, int answer) = 0;
};

#endif
