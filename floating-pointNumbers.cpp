#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x1 = 0.123456, x2 = 23.987, x3 = -123.456;
	cout << left << setw(15) << x1 << endl;
	cout << fixed << setprecision(2) << right << setw(12) << x2 << endl;
	cout << scientific << setprecision(4) << x3 << endl;
	return 0;
}