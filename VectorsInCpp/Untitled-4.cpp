#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Initial Vector: ";

  for (const int& i : num) { //if you use const its mean you should probably also use &. i is here not declaring the index , i is directly the elements of num
    cout << i << "  ";
  }
  /*  this will do pretty much the same thing but here i means index 

    for ( int i = 0; i < num.size(); i++) {
        cout << num[i] << std;
        // cout << num.at(i) << endl;
    }

*/ 

  // change elements at indexes 1 and 4
  num.at(1) = 9;
  num.at(4) = 7;

  cout << "\nUpdated Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }

  return 0;
}