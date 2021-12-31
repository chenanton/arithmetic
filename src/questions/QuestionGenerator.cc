#include <iostream>
#include <random>

#include "questions/Question.hh"
#include "questions/QuestionType.hh"
#include "questions/factory/AdditionQuestionFactory.hh"
#include "questions/factory/DivisionQuestionFactory.hh"
#include "questions/factory/MultiplicationQuestionFactory.hh"
#include "questions/factory/QuestionFactory.hh"
#include "questions/factory/SubtractionQuestionFactory.hh"

QuestionGenerator::QuestionGenerator()
    : numQuestions(getNumQuestions()),
      rng(getRNG()),
      qd(getQuestionDistribution()) {}

QuestionGenerator::~QuestionGenerator() { delete qf; }

int QuestionGenerator::getNumQuestions() {
  return static_cast<int>(QuestionType::LAST);
}

std::mt19937 QuestionGenerator::getRNG() {
  std::random_device rd;
  std::mt19937 rng(rd());
  return rng;
}

std::uniform_int_distribution<int>
QuestionGenerator::getQuestionDistribution() {
  std::uniform_int_distribution<int> qd(0, numQuestions - 1);
  return qd;
}

Question* QuestionGenerator::getQuestion() {
  cycleRandomQuestion();
  return qf->getQuestion();
}

void QuestionGenerator::cycleRandomQuestion() {
  delete qf;
  QuestionType curType = getRandomQuestionType();
  switch (curType) {
    case QuestionType::addition:
      qf = new AdditionQuestionFactory();
      break;
    case QuestionType::subtraction:
      qf = new SubtractionQuestionFactory();
      break;
    case QuestionType::multiplication:
      qf = new MultiplicationQuestionFactory();
      break;
    case QuestionType::division:
      qf = new DivisionQuestionFactory();
      break;
    default:
      std::cerr << "Invalid question type!" << std::endl;
      break;
  }
}

QuestionType QuestionGenerator::getRandomQuestionType() {
  return static_cast<QuestionType>(qd(rng));
}
