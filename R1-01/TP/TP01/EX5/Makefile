main : main.o convert.o
	g++ -o main main.cpp convert.cpp
	./main

convert.o : convert.cpp convert.hpp
	g++ -o convert.cpp