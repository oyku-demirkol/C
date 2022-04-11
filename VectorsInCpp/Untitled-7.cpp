#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> num {1,2,3,4,4};
    //declare iterator
    vector<int>::iterator iter;
    //use iterator with for loop 
    for(iter = num.begin(); iter != num.end(); ++iter){ // loop will continue until, when iter is equal to num.end() , num.end() means end of vector so the index is 5, for num.begin() its 1  
        cout << *iter << " ";
    }
    return 0;
}