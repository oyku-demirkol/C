#include <iostream>
#include <cmath>

int main() {
	std::cout <<"4->" << pow(4, 0.5) << std::endl;
	std::cout <<"12.25->" << pow(12.25, 0.5) << std::endl;
	std::cout <<"0.0121->" << pow(0.0121, 0.5) << std::endl;

	std::cout << "Please enter a value to find the square root of it" << std::endl;

	double x;
	std::cin >> x;
	std::cout << pow(x, 0.5) << std::endl;

	return 0;
}