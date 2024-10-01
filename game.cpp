#include <iostream>
#include <stdlib.h>

int main() {

    // Declare the variables
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "shoot! ";
    std::cin >> user;

    // Demonstrate the choices
    if (user == 1) {
        std::cout << "\nYou chose Rock!\n";
    } else if (user == 2) {
        std::cout << "\nYou chose Paper!\n";
    } else if (user == 3) {
        std::cout << "\nYou chose Scissors!\n";
    } else {
        std::cout << "\nInvalid Input.";
    }

    if (computer == 1) {
        std::cout << "Computer chose Rock!\n";
    } else if (computer == 2) {
        std::cout << "Computer chose Paper!\n";
    } else {
        std::cout << "Computer chose Scissors!\n\n";
    }

    // Determine the winner
    if (computer == user) {
        std::cout << "It is a tie!";
    }

    else if (computer == 1 && user == 2) {
        std::cout << "You win!";
    }

    else if (computer == 1 && user == 3) {
        std::cout << "The computer wins!";
    }

    else if (computer == 2 && user == 1) {
        std::cout << "The computer wins!";
    }

    else if (computer == 2 && user == 3) {
        std::cout << "You win!";
    }

    else if (computer == 3 && user == 1) {
        std::cout << "You win!";
    }

    else if (computer == 3 && user == 2) {
        std::cout << "The computer wins!";
    }

}