SRC_DIR = src
INC_DIR = include
OBJ_DIR = build
BIN_DIR = bin
TARGET = arithmetic

CC = g++
CFLAGS = -Wall -I${INC_DIR} -g -pthread

_OBJECTS = \
					Main.o \
					App.o \
					QuestionGenerator.o \
					Question.o \
					AdditionQuestion.o \
					SubtractionQuestion.o \
					MultiplicationQuestion.o \
					DivisionQuestion.o \
					QuestionFactory.o \
					AdditionQuestionFactory.o \
					SubtractionQuestionFactory.o \
					MultiplicationQuestionFactory.o \
					DivisionQuestionFactory.o
OBJECTS = $(patsubst %,$(OBJ_DIR)/%,$(_OBJECTS))

arithmetic: ${_OBJECTS}
	${CC} ${CFLAGS} ${OBJECTS} -o ${BIN_DIR}/${TARGET}

Main.o: \
	${SRC_DIR}/Main.cc \
	${SRC_DIR}/app/App.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/Main.cc -o ${OBJ_DIR}/$@

App.o: \
	${SRC_DIR}/app/App.cc \
	${SRC_DIR}/questions/types/Question.cc \
	${SRC_DIR}/questions/QuestionGenerator.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/app/App.cc -o ${OBJ_DIR}/$@

QuestionGenerator.o: \
	${SRC_DIR}/questions/QuestionGenerator.cc \
	${SRC_DIR}/questions/types/Question.cc \
	${SRC_DIR}/questions/factory/QuestionFactory.cc \
	${SRC_DIR}/questions/factory/AdditionQuestionFactory.cc \
	${SRC_DIR}/questions/factory/SubtractionQuestionFactory.cc \
	${SRC_DIR}/questions/factory/MultiplicationQuestionFactory.cc \
	${SRC_DIR}/questions/factory/DivisionQuestionFactory.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/QuestionGenerator.cc -o ${OBJ_DIR}/$@

Question.o: \
	${SRC_DIR}/questions/types/Question.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/types/Question.cc -o ${OBJ_DIR}/$@

AdditionQuestion.o: \
	${SRC_DIR}/questions/types/AdditionQuestion.cc \
	${SRC_DIR}/questions/types/Question.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/types/AdditionQuestion.cc -o ${OBJ_DIR}/$@

SubtractionQuestion.o: \
	${SRC_DIR}/questions/types/SubtractionQuestion.cc \
	${SRC_DIR}/questions/types/Question.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/types/SubtractionQuestion.cc \
		-o ${OBJ_DIR}/$@

MultiplicationQuestion.o: \
	${SRC_DIR}/questions/types/MultiplicationQuestion.cc \
	${SRC_DIR}/questions/types/Question.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/types/MultiplicationQuestion.cc \
		-o ${OBJ_DIR}/$@

DivisionQuestion.o: \
	${SRC_DIR}/questions/types/DivisionQuestion.cc \
	${SRC_DIR}/questions/types/Question.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/types/DivisionQuestion.cc \
		-o ${OBJ_DIR}/$@

QuestionFactory.o: \
	${SRC_DIR}/questions/factory/QuestionFactory.cc \
	${SRC_DIR}/questions/types/Question.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/factory/QuestionFactory.cc \
		-o ${OBJ_DIR}/$@

AdditionQuestionFactory.o: \
	${SRC_DIR}/questions/factory/AdditionQuestionFactory.cc \
	${SRC_DIR}/questions/factory/QuestionFactory.cc \
	${SRC_DIR}/questions/types/Question.cc \
	${SRC_DIR}/questions/types/AdditionQuestion.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/factory/AdditionQuestionFactory.cc \
		-o ${OBJ_DIR}/$@

SubtractionQuestionFactory.o: \
	${SRC_DIR}/questions/factory/SubtractionQuestionFactory.cc \
	${SRC_DIR}/questions/factory/QuestionFactory.cc \
	${SRC_DIR}/questions/factory/AdditionQuestionFactory.cc \
	${SRC_DIR}/questions/types/Question.cc \
	${SRC_DIR}/questions/types/SubtractionQuestion.cc \
	${SRC_DIR}/questions/types/AdditionQuestion.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/factory/SubtractionQuestionFactory.cc \
		-o ${OBJ_DIR}/$@

MultiplicationQuestionFactory.o: \
	${SRC_DIR}/questions/factory/MultiplicationQuestionFactory.cc \
	${SRC_DIR}/questions/factory/QuestionFactory.cc \
	${SRC_DIR}/questions/types/Question.cc \
	${SRC_DIR}/questions/types/MultiplicationQuestion.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/factory/MultiplicationQuestionFactory.cc \
		-o ${OBJ_DIR}/$@

DivisionQuestionFactory.o: \
	${SRC_DIR}/questions/factory/DivisionQuestionFactory.cc \
	${SRC_DIR}/questions/factory/QuestionFactory.cc \
	${SRC_DIR}/questions/factory/MultiplicationQuestionFactory.cc \
	${SRC_DIR}/questions/types/Question.cc \
	${SRC_DIR}/questions/types/DivisionQuestion.cc \
	${SRC_DIR}/questions/types/MultiplicationQuestion.cc
	${CC} -c ${CFLAGS} ${SRC_DIR}/questions/factory/DivisionQuestionFactory.cc \
		-o ${OBJ_DIR}/$@

clean:
	rm -f ${OBJ_DIR}/*.o  ${BIN_DIR}/${TARGET}
