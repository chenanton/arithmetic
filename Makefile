SRC_DIR = src
INC_DIR = include
OBJ_DIR = build
TARGET = bin/arithmetic
CXX = g++
CXXFLAGS = -Wall -I${INC_DIR} -g

arithmetic: Main.o QuestionFactory.o AdditionQuestionFactory.o 
	${CXX}  Main.o QuestionFactory.o AdditionQuestionFactory.o -o arithmetic
