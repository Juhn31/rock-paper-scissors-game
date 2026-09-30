#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    std::srand(std::time(nullptr));

    bool playagain = true;

    while (playagain) {
        std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
    

    int user;

    int computer;

        std::cout << "(1) rock" << std::endl;
        std::cout << "(2) paper" << std::endl;
        std::cout << "(3) scissors" << std::endl;

        std::cout << "Enter your choice (1-3): ";
        
        if (!(std::cin >> user)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Please enter a number between 1-3 (except 67 fuck you)." << std::endl;
            continue;
        }

    if (user == 1) {
        std::cout << "You chose rock." << std::endl;
    }
    else if (user == 2) {
        std::cout << "You chose paper." << std::endl;
    }
    else if (user == 3) {
        std::cout << "You chose scissors." << std::endl;
    }
    else if (user == 67) {
        std::cout << "Get out" << std::endl;
        std::cout << "Press any key to continue";
        std::cin.ignore(1000, '\n');
        std::cin.get();
        playagain = true;
        continue;
    }
    else {
        std::cout << "Invalid number, please choose between 1-3." << std::endl;
        continue;
    }
    computer = std::rand() %3+1;
    if (computer == 1) {
        std::cout << "Computer chose rock." << std::endl;
    }
    else if (computer == 2) {
        std::cout << "Computer chose paper." << std::endl;
    }
    else {
        std::cout << "Computer chose scissors." << std::endl;
    }

    if (user == computer) {
        std::cout << "It's a tie!" << std::endl;
    }

    else if ((user == 3) && (computer == 1) ||
            (user == 2) && (computer == 3) ||
            (user == 1) && (computer == 2)) {
                std::cout << "You Lose!" << std::endl;           
 }
 
    else {
        std::cout << "You Win!" << std::endl;
    }

    std::cout << "Do you want to play again? (y/n): ";

    char answer;

    std::cin >> answer;

    if (answer == 'n') {
        playagain = false;
        std::cout << "See you next time!" << std::endl;
    }

    if (answer == 'y') {
        playagain = true;

        std::system("cls");
    }
    }
    return 0;

}
