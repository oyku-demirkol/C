#include <iostream>
#include <vector>

//the at() function is preferred over [] square bracket ,cause at() funktion checks the boundary so if the vector is out of bound, it give as exception 
// but [] gives garbage value or exception , so using at() function is much more better  
using namespace std;

int main(){
vector<int> num {1,2,3,4,5};

cout << "Element at Index 0: " << num.at(0) << endl;
cout << "Element at Index 1: " << num.at(1) << endl;
cout << "Element at Index 4: " << num.at(4) << endl;
}