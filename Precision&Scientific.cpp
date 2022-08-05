#include <iostream>

int main() {
	double x = 12.0;
	std::cout.precision(2);
	std::cout << "By default: " << x << std::endl;
	std::cout << " showpoint:" << std::showpoint << x << std::endl;
	std::cout << " fixed:" << std::fixed << x << std::endl;
	std::cout << "scientific: " << std::scientific << x << std::endl;


}