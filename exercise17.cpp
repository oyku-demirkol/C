#include <iostream>
#include <iomanip>

int main() {
	long number;
	int count;
	double price;

	std::cout << "\nPls enter article characteristics.\n";
	std::cout << "Article number:";

	std::cin >> number;

	std::cout << "Number of pieces:";
	std::cin >> count;

	std::cout << "Priece per piece:";
	std::cin >> price;

	std::cout << "\n\tArticle Number: Quantity: Priece per piece:";
	std::cout << "\n\t" << std::setw(8) << number << std::setw(16) << count <<  std::fixed << std::setprecision(2) << std::setw(16) << price << "Dollar" << std::endl;
	return 0;
}