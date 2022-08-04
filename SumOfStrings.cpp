#include <iostream>
#include <string>

int main() {
	std::string message("I have learned something new again!\n"),
		prompt("Please input two lines of text:"),
		str1, str2, sum;

	std::cout << message << std::endl;
	std::cout << prompt << std::endl;

	getline(std::cin, str1);
	getline(std::cin, str2);

	sum = str1 + " + " + str2;
	std::cout << sum << std::endl;

	return 0;
}