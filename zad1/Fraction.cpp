#include "Fraction.h"
#include <string>
#include <iostream>
Fraction::Fraction(int numerator_number, unsigned int denominator_number)
{
    variable_numerator = numerator_number;
    variable_denominator = denominator_number;
}

void Fraction::print()
{
    std::cout << "Licznik: " << variable_numerator << " Mianownik: " << variable_denominator << std::endl;
}

int Fraction::numerator()
{
    return variable_numerator;
}

unsigned int Fraction::denominator()
{
    return variable_denominator;
}

double Fraction::approximation()
{
    double approximate_number = variable_numerator / variable_denominator;
    return approximate_number;
}

bool Fraction::neg()
{
    return numerator() < 0;
}

Fraction Fraction::add(Fraction fraction) 
{
    int common_denominator = variable_denominator * fraction.denominator();
    int sum = variable_numerator * fraction.denominator() + fraction.numerator() * variable_denominator;
    return Fraction(sum, common_denominator);
}

Fraction Fraction::sub(Fraction fraction)
{
    int common_denominator = variable_denominator * fraction.denominator();
    int diff = variable_numerator * fraction.denominator() - fraction.numerator() * variable_denominator;
    return Fraction(diff, common_denominator);
}

Fraction Fraction::mul(Fraction fraction)
{
    int new_denominator = variable_denominator * fraction.denominator();
    int new_numerator = variable_numerator * fraction.numerator();
    return Fraction(new_numerator, new_denominator);
}

bool Fraction::identical(Fraction fraction)
{
    return fraction.denominator() == variable_denominator && fraction.numerator() == variable_numerator;
}
;
