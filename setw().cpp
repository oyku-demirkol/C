//Enter a character and outputs its
//octal, decimal and hexadecimal code

#include <iostream> //declaration of cin,cout
#include <iomanip>  //for manipulators being called with arguments
#include <string>

int main() {
	int number = ' ';

	std::cout << "The white space code is  as follows:"
		<< number << std::endl;
	char ch;
	std::string prompt = "\nPlease enter a character followed by"
		"<return>";
	std::cout << prompt;
	std::cin >> ch;
	number = ch;

	std::cout << "The character " << ch
		<< "has code " << number << std::endl;
	std::cout << std::uppercase
		<< " octal decimal hexadecimal\n "
		<< std::oct << std::setw(8) << number
		<< std::dec << std::setw(8) << number
		<< std::hex << std::setw(8) << number << std::endl;

	return 0;


}