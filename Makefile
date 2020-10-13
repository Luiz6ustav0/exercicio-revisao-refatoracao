CC=g++
CFLAGS=-fsanitize=address,undefined -O1 -fno-omit-frame-pointer \
		-g -Wall -Wshadow -std=c++17 \
		-Wno-unused-result -Wno-sign-compare -Wno-char-subscripts
TARGET=main.out

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include
TEST_DIR = ./test
TEST_FILE = BasicTests.cpp

all: run

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Vendedor.o ${BUILD_DIR}/main.o ${BUILD_DIR}/Engenheiro.o ${BUILD_DIR}/Empregado.o
	@${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Engenheiro.o: ${INCLUDE_DIR}/Empregado/Empregado.hpp ${SRC_DIR}/Empregado/Engenheiro.cpp
	@${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/Empregado/Engenheiro.cpp -o ${BUILD_DIR}/Engenheiro.o

${BUILD_DIR}/Empregado.o: ${INCLUDE_DIR}/Empregado/Empregado.hpp
	@${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/Empregado/Empregado.cpp -o ${BUILD_DIR}/Empregado.o

${BUILD_DIR}/Vendedor.o: ${INCLUDE_DIR}/Empregado/Empregado.hpp ${SRC_DIR}/Empregado/Vendedor.cpp
	@${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/Empregado/Vendedor.cpp -o ${BUILD_DIR}/Vendedor.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Empregado/Empregado.hpp ${SRC_DIR}/main.cpp
	@${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

run: ${BUILD_DIR}/${TARGET}
	@$^

${TEST_DIR}/test.out : ${BUILD_DIR}/Vendedor.o
	@${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${TEST_DIR}/${TEST_FILE} -o ${TEST_DIR}/BasicTests.o
	@${CC} ${CFLAGS} ${BUILD_DIR}/*.o ${TEST_DIR}/*.o -o ${TEST_DIR}/test.out

test: ${TEST_DIR}/test.out
	@$^ 
	@echo "Removing files built for testing now"
	@make clean

clean:
	@rm -f ${BUILD_DIR}/* ${TEST_DIR}/*.out ${TEST_DIR}/*.o