#ifndef QUESTION_GENERATOR_H
#define QUESTION_GENERATOR_H

#include <random>

#include "Question.hh"
#include "QuestionFactory.hh"
#include "QuestionType.hh"

/* Generates a random question of random type. */
class QuestionGenerator {
  int numQuestions;
  std::mt19937 rng;
  std::uniform_int_distribution<int> qd;
  QuestionFactory* qf;

 public:
  QuestionGenerator();
  ~QuestionGenerator();
  Question* getQuestion();

 private:
  int getNumQuestions();
  std::mt19937 getRNG();
  std::uniform_int_distribution<int> getQuestionDistribution();
  void cycleRandomQuestion();
  QuestionType getRandomQuestionType();
};

#endif
