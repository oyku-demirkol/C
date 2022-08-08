#include <iostream>
#include <iomanip>

int main() {
	double rate = 1.15; //exchange rate
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\tEuro \tDollar\n";

	for (int euro = 1; euro <= 5; ++euro)
		std::cout << "\t" << euro << "\t" << euro * rate << std::endl;

	return 0;
}