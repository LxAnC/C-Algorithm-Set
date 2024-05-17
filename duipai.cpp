#include <iostream>
#include <random>
#include <chrono>

int main() {
    // Obtain the current time as a seed for random number generation
    auto currentTime = std::chrono::system_clock::now();
    auto duration = currentTime.time_since_epoch();
    unsigned seed = static_cast<unsigned>(duration.count());
    
    // Initialize random number generator with the seed
    std::default_random_engine generator(seed);

    // Define the range for random numbers
    int min_val = 0; // minimum value
    int max_val = RAND_MAX; // maximum value, RAND_MAX is the largest possible value returned by rand()

    // Define a uniform distribution for random numbers
    std::uniform_int_distribution<int> distribution(min_val, max_val);

    // Generate a random number
    int random_number = distribution(generator);

    // Output the random number
    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}
