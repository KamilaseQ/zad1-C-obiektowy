#include "Fraction.h"
#include <string>
#include <iostream>
#include <cstdlib>

Fraction::Fraction(int numerator_number, unsigned int denominator_number)
{
    variable_numerator = numerator_number;
    variable_denominator = denominator_number;
    simplify();
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
    double approximate_number = double(variable_numerator) / variable_denominator;
    return approximate_number;
}

Fraction Fraction::neg()
{
    int new_numerator = variable_numerator * -1;
    return Fraction(new_numerator, variable_denominator);
}

Fraction Fraction::add(Fraction fraction) 
{
    int greatest_common_div = gcd(variable_denominator, fraction.denominator());
    unsigned int common_denominator = (variable_denominator/ greatest_common_div) * fraction.denominator();
    int sum = (variable_numerator * fraction.denominator())/ greatest_common_div + (fraction.numerator() * variable_denominator)/greatest_common_div;
    return Fraction(sum, common_denominator);
}

Fraction Fraction::sub(Fraction fraction)
{
    int greatest_common_div = gcd(variable_denominator, fraction.denominator());
    unsigned int common_denominator = variable_denominator * fraction.denominator() / greatest_common_div;
    int diff = variable_numerator * fraction.denominator()/ greatest_common_div - fraction.numerator() * variable_denominator/ greatest_common_div;
    return Fraction(diff, common_denominator);
}

Fraction Fraction::mul(Fraction fraction)
{
    int greatest_common_div = gcd(variable_denominator, fraction.denominator());
    unsigned int new_denominator = variable_denominator / greatest_common_div * fraction.denominator();
    int new_numerator = variable_numerator * fraction.numerator();
    return Fraction(new_numerator, new_denominator);
}

bool Fraction::identical(Fraction fraction)
{
    return fraction.denominator() == variable_denominator && fraction.numerator() == variable_numerator;
}

int Fraction::gcd(int a, int b)
{
    a = std::abs(a);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::simplify()
{

    if (variable_numerator == 0)
    {
        variable_denominator = 1;
    }
    else
    {
        int greatest_common_div = gcd(variable_numerator, variable_denominator);
        variable_numerator = variable_numerator / greatest_common_div;
        variable_denominator = variable_denominator / greatest_common_div;
    }
        
}
;
