#include <iostream>

int main() {
	float limit, speed, toofast;
	std::cout << "\nSpeed limit:";
	std::cin >> limit;
	std::cout << "\nSpeed:";
	std::cin >> speed;

	if ((toofast = speed - limit) < 10)
		std::cout << "You were lucky!" << std::endl;
	else if (toofast < 20)
		std::cout << "Fine payable: 40,-.Dollars" << std::endl;
	else if (toofast < 30)
		std::cout << "Fine payable: 80,-.Dollars" << std::endl;
	else
		std::cout << "Hand over your driver's license!" << std::endl;
	return 0;
}