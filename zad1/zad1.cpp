

#include <iostream>
#include "Fraction.h"

int main()
{
	
	Fraction fleft(1, 1000000);
	Fraction fright(-1, 500000);
	Fraction fcorrect(-1, 1000000);

	Fraction fres = fleft.add(fright);
	fres.print();
	fcorrect.print();
	if (not fres.identical(fcorrect))
		std::cout << "Error in add\n";

	Fraction f3(3, 4);
	Fraction f4(1, 2);
	Fraction expectedSub(1, 4);
	Fraction resultSub = f3.sub(f4);
	resultSub.print();
	expectedSub.print();
	if (!resultSub.identical(expectedSub))
		std::cout << "Error in sub()\n";


	Fraction f5(2, 3);
	Fraction f6(3, 4);
	Fraction expectedMul(1, 2);
	Fraction resultMul = f5.mul(f6);
	resultMul.print();
	expectedMul.print();
	if (!resultMul.identical(expectedMul))
		std::cout << "Error in mul()\n";

	Fraction f7(2, 3);
	Fraction expectedNeg(-2, 3);
	Fraction resultNeg = f7.neg();
	resultNeg.print();
	expectedNeg.print();
	if (!resultNeg.identical(expectedNeg))
		std::cout << "Error in neg()\n";

	Fraction f8(1, 2);
	double approx = f8.approximation();
	std::cout << "Approximation of 1/2: " << approx << std::endl;
	if (approx != 0.5)
		std::cout << "Error in approximation()\n";

	Fraction f9(2, 4);
	Fraction f10(1, 2);
	f9.print();
	f10.print();
	if (!f9.identical(f10))
		std::cout << "Error in identical()/simplify()\n";

	Fraction fZero(0, 12345);
	Fraction expectedZero(0, 1);
	fZero.print();
	expectedZero.print();
	if (!fZero.identical(expectedZero))
		std::cout << "Error in simplify() for zero numerator\n";

	Fraction f11(1000000, 1000000);
	Fraction f12(1000000, 1000000);
	Fraction expectedExtreme(2, 1);
	Fraction resultExtreme = f11.add(f12);
	resultExtreme.print();
	expectedExtreme.print();
	if (!resultExtreme.identical(expectedExtreme))
		std::cout << "Error in add() for extreme values\n";


	return 0;

	
}
