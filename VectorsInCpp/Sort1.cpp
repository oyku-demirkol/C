#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::cout << "smaller to greater" << std::endl;

    std::vector<int> wertes = {3,5,1,4,2};
    std::sort(wertes.begin(),wertes.end());

    for(int werte : wertes){
        std::cout << werte << std::endl;
    }
    std::cout << "greater to smaller" << std::endl;

    std::sort(wertes.begin(),wertes.end(),std::greater<int>());

    for(int neue_werte : wertes){
        std::cout << neue_werte << std::endl;
    }

    std::cin.get();
}