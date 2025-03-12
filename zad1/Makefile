CXX = g++                # kompilator C++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17

# Domyœlna regu³a - po wpisaniu "make" w konsoli:
all: zad1

# Regu³a buduj¹ca plik wykonywalny:
zad1: Fraction.o zad1.o
	$(CXX) $(CXXFLAGS) -o zad1 Fraction.o zad1.o

# Regu³a kompilacji Fraction.cpp do Fraction.o:
Fraction.o: Fraction.cpp Fraction.h
	$(CXX) $(CXXFLAGS) -c Fraction.cpp

# Regu³a kompilacji zad1.cpp do zad1.o:
zad1.o: zad1.cpp Fraction.h
	$(CXX) $(CXXFLAGS) -c zad1.cpp

# Usuwanie plików poœrednich i programu wykonywalnego:
clean:
	rm -f *.o zad1