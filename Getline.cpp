//To use strings

#include <iostream> 
#include <string> //Declaration of class string

int main() {
	//defines four strings
	std::string prompt("what is your name: "),
		name,        
		line(40, '-'),
		total = "Hello ";
	std::cout << prompt;
	std::getline(std::cin, name);

	total = total + name;

	std::cout << line << std::endl
		<< total << std::endl;
	std::cout << "Your name is " //Outputs line and name
		<< name.length() << " characters long!" << std::endl;
	std::cout << line << std::endl;

	return 0;
}