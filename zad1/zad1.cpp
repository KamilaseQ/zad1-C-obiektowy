

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
	
}
