#include <iostream>

int main() {
	float x, y, min;

	std::cout << "Enter two different numbers:\n";
	if (std::cin >> x && std::cin >> y) {
		if (x < y)
			min = x;
		else
			min = y;
		std::cout << "\nThe smaller number is:" << min << std::endl;
	}
	else
		std::cout << "\nInvalid Input!" << std::endl;
	return 0;
}