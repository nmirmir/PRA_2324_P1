all: main 
	g++ -c testArray.cpp
testArray.o: ListArray.h testArray.cpp
	g++ -c testArray.cpp
testArray: ListArray.h testArray.cpp
	g++ -o main testArray.o
