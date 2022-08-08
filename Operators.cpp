//Evaluating operands in logical expressions

#include <iostream>

int main() {
	std::cout << std::boolalpha;
	bool res = false;

	int y = 5;

	res = 7 || (y = 0);
	std::cout << "Result of (7|| (y =5)):" << res << std::endl;
	std::cout << "Value of y:" << y << std::endl;

	int a, b, c;

	a = b = c = 0;
	res = ++a || ++b && ++c;
	std::cout << '\n'
		<< "res=" << res
		<< ",a=" << a
		<< ",b=" << b
		<< ",c=" << c << std::endl;

	a = b = c = 0;
	res = ++a && ++b || ++c;
	std::cout << "res=" << res
		<< " a=" << a
		<< " b=" << b
		<< " c=" << c << std::endl;

	return 0;



}