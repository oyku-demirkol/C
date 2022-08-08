//computing the average of integers

#include <iostream>

int main() {
	std::cout << "pls enter the integers for calculating the average:(enter to smth which is not integer to finish)" << std::endl;
	int x, count=0;
	double ave,sum = 0.0;
	while (std::cin >> x)
	{
		sum += x;
		++count;
	}
	ave = sum / count;
	std::cout << "average is " << ave << std::endl;
}