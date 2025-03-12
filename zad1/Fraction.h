#pragma once
class Fraction
{
private:
	int variable_numerator;
	unsigned int variable_denominator;
	void simplify();
	int gcd(int number_one, int number_two) const;
public:
	Fraction(int numerator_number, unsigned int denominator_number);
	int numerator() const;
	unsigned int denominator() const;
	void print() const;
	Fraction add(Fraction fraction) const;
	Fraction sub(Fraction fraction) const;
	Fraction mul(Fraction fraction) const;
	bool identical(Fraction fraction) const;
	double approximation() const;
	Fraction neg() const;
};

