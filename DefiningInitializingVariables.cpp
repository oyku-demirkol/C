// Defining and initializing variables
#include <iostream>

int main()
{
	float x = 123.456,
		y = 76.543,
		sum;
	sum = x + y;

	std::cout << "Total: "
		<< x << " + " << y << " = " << sum << std::endl; 
	std::cout << "Difference: "
		<< x << " - " << y << " = " << (x - y) << std::endl;

	return 0;
}