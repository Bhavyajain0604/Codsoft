#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed the random number generator

    int randomNumber = std::rand() % 100 + 1; // Generate random number between 1 and 100
    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Guess the number between 1 and 100.\n\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            std::cout << "Too low. Try again.\n";
        } else if (userGuess > randomNumber) {
            std::cout << "Too high. Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (userGuess != randomNumber);

    return 0;
}
