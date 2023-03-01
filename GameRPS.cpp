#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // seed the random number generator
    
    // Display the game title and rules
    cout << "Welcome to Rock-Paper-Scissors!" << endl;
    cout << "You will be playing against the computer. Enter 'r' for rock, 'p' for paper, or 's' for scissors." << endl;
    
    // Game loop
    while (true) {
        // Get the user's choice
        char playerChoice;
        cout << "Enter your choice: ";
        cin >> playerChoice;
        playerChoice = tolower(playerChoice); // convert to lowercase for case-insensitivity
        
        // Generate the computer's choice
        char computerChoice;
        int randomNum = rand() % 3; // generate a random number between 0 and 2
        if (randomNum == 0) {
            computerChoice = 'r';
        } else if (randomNum == 1) {
            computerChoice = 'p';
        } else {
            computerChoice = 's';
        }
        
        // Display the choices
        cout << "You chose " << playerChoice << endl;
        cout << "The computer chose " << computerChoice << endl;
        
        // Determine the winner
        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 'r' && computerChoice == 's') ||
                   (playerChoice == 'p' && computerChoice == 'r') ||
                   (playerChoice == 's' && computerChoice == 'p')) {
            cout << "You win!" << endl;
        } else {
            cout << "You lose!" << endl;
        }
        
        // Ask the user if they want to play again
        char playAgain;
        cout << "Do you want to play again? (y/n) ";
        cin >> playAgain;
        if (tolower(playAgain) != 'y') {
            break;
        }
    }
    
    return 0;
}
