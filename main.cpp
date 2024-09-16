// Rolls 2 dice and prints out the result
// code by Ryuya

#include <iostream>
#include <chrono>
#include <random>

int main() {
    unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count(); // get current time
    std::default_random_engine generator(seed); // create random number generator with current time as a seed
    std::uniform_int_distribution<int> distribution(1, 6); // with a uniform distribution of type int between 1 and 6
    
    // roll dice and print
    std::cout << "Rolling two dice:" << std::endl;
    std::cout << "Rolled a " << distribution(generator) << " and a " << distribution(generator) << std::endl; // generates 2 random numbers

    return 0;
}
