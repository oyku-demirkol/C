#include <iostream>
#include <vector>
using namespace std;

// iterators works like index [] principle

int main(){

    vector<int> num = {1,2,3,4,5};
    //declare iterator 
    vector<int>:: iterator iter;
    //initialize the iterator with the first element 
    iter = num.begin();
    //print the vector element 
    cout << " num[0] = " << *iter << endl;
    //iterator points to the 3rd element 
    iter = num.begin() + 2;
    cout << " num[2] = " << *iter << endl;
    //iterator points to the second element 
    iter = num.end()-4; 
    cout << " num[1] = " << *iter << endl;
    return 0; 
}