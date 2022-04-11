#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> prime_numbers = {2, 3, 5, 7}; 
    //initial vector
    cout << "\nInitial Vector"; 
    for(int i: prime_numbers){
        cout <<  i  << " ";
    }
    cout << "\n";
    //remove the last element 
    prime_numbers.pop_back();
    //final vector
    for(int i : prime_numbers){
        cout <<  i  << " "; 
    }
    cout << "\n";
    cout << prime_numbers.size() << " = size of the vector" << endl;
    cout << prime_numbers.front() << " = first element" << endl;
    cout << prime_numbers.back() << " = last element" << endl;
    cout << prime_numbers.capacity() << "= capacity of vector" << endl;
    cout << prime_numbers.empty() << " = its gives 1 if its empty and 0 if its not" << endl;
    return 0;
}