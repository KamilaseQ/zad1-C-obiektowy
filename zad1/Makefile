CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17

all: zad1

zad1: Fraction.o zad1.o
	$(CXX) $(CXXFLAGS) -o zad1 Fraction.o zad1.o

Fraction.o: Fraction.cpp Fraction.h
	$(CXX) $(CXXFLAGS) -c Fraction.cpp

zad1.o: zad1.cpp Fraction.h
	$(CXX) $(CXXFLAGS) -c zad1.cpp

clean:
	rm -f *.o zad1