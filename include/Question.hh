#ifndef QUESTION_H
#define QUESTION_H

class Question {
 protected:
  int arg1, arg2;
  int answer;

 public:
  Question(int arg1, int arg2, int answer);
  virtual ~Question();

  bool checkAnswer(int);
  int getArg1();
  int getArg2();
  virtual char getOperator() = 0;
  void print();
};

#endif
