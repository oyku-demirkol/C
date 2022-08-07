#include <iostream>


int main() {
	int i(2), j(8);
	std::cout << i++ << std::endl; //2
	std::cout << i << std::endl;   //3
	std::cout << j-- << std::endl; //8
	std::cout << --j << std::endl; //6

	return 0;
}