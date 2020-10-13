CC=clang++
CFLAGS=-fsanitize=address,undefined -O1 -fno-omit-frame-pointer \
		-g -Wall -Wshadow -std=c++17 \
		-Wno-unused-result -Wno-sign-compare -Wno-char-subscripts
TARGET=main.out

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/Engenheiro.o ${BUILD_DIR}/Vendedor.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Engenheiro.o: ${INCLUDE_DIR}/Empregado/Empregado.hpp ${SRC_DIR}/Empregado/Engenheiro.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/Empregado/Engenheiro.cpp -o ${BUILD_DIR}/Engenheiro.o

${BUILD_DIR}/Vendedor.o: ${INCLUDE_DIR}/Empregado/Empregado.hpp ${SRC_DIR}/Empregado/Vendedor.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/Empregado/Vendedor.cpp -o ${BUILD_DIR}/Vendedor.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/Empregado/Empregado.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/Empregado/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

run: ${BUILD_DIR}/${TARGET}
	@$^

clean:
	rm -f ${BUILD_DIR}/* 