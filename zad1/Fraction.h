#pragma once
class Fraction
{
private:
	int variable_numerator;
	unsigned int variable_denominator;
public:
	Fraction(int numerator_number, unsigned int denominator_number);
	int numerator();
	unsigned int denominator();
	void print();
	Fraction add(Fraction fraction);
	Fraction sub(Fraction fraction);
	Fraction mul(Fraction fraction);
	bool identical(Fraction fraction);
	double approximation();
	bool neg();

};

