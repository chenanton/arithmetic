#include <iostream>
#include <random>

#include "AdditionQuestionFactory.hh"
#include "DivisionQuestionFactory.hh"
#include "MultiplicationQuestionFactory.hh"
#include "Question.hh"
#include "QuestionFactory.hh"
#include "QuestionGenerator.hh"
#include "QuestionType.hh"
#include "SubtractionQuestionFactory.hh"

QuestionGenerator::QuestionGenerator()
    : numQuestions(getNumQuestions()),
      rng(getRNG()),
      qd(getQuestionDistribution()),
      qf(nullptr) {}

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
