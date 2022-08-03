//calculating powers with the standard function pow()

#include <iostream>
#include <cmath>

int main() {
	double x = 2.5, y;
	y = pow(x, 3.0); //ok
	y = pow(x, 3);   //ok, the compiler converts the int value 3 to double

	std::cout << "2.5 raised to 3 yields:" << y << std::endl;
	std::cout << " 2 + (5 raised to the power 2.5) yields: "
		<< 2.0 + pow(5.0, x) << std::endl;
	return 0;
}