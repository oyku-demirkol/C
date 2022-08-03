//outputs four random numbers

#include <iostream>
#include <cstdlib> //Prototypes of srand() , rand()
                   // void srand(unsigned int seed)

int main() {
    unsigned int seed;
    int z1, z2, z3, z4;
    std::cout << "---Random Numbers---" << std::endl;
    std::cout << "To initialize the random number generator,"
        << "\n please enter an integer value:";
    std::cin >> seed;  
    srand(seed); //uses it as argument for a new sequence of random numbers
    //The srand() function sets the initial point for generating the pseudo-random numbers.without srand it gives the same numbers

    z1 = rand();
    z2 = rand();
    z3 = rand();
    z4 = rand();

    std::cout << "\nFour random numbers:"
        << z1 << "  " << z2 << "  " << z3 <<"  " << z4 << std::endl;

    return 0;
}