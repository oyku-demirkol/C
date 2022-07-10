#include<iostream>
/*Overloading = if two functions are having the same name but different types of arguments or different number of arguments
that means overloading happens there */

using namespace std;

int plusFuncInt(int x, int y) {
	return x + y;
}

double plusFuncDouble(double x, double y) {
	return x + y;
}

int main() {
	int myNum1 = plusFuncInt(8, 5);
	double myNum2 = plusFuncDouble(4.3, 6.26);
	cout << "Int: " << myNum1 << "/n";
	cout << "Double: " << myNum2 << "/n";
	return 0;
}