#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name;
    char input;
    int inputuser;
    int score = 0;                

    cout << "Enter your name: ";
    getline(cin, name);
    cout << endl;

    do {
        srand(time(0)); 
        int variable = rand() % 5 + 1;

        cout << "Enter any number in the range 1 to 5: ";
        cin >> inputuser;
        cout << endl;

        if (inputuser == variable) {
            cout << "Congratulations! You guessed the correct number." << endl;
            score++;
        } else {
            cout << "Sorry, you guessed the wrong number. Try again." << endl;
        }

        cout << "Would you like to try again? (Y/N): ";
        cin >> input;
        cout << endl;

    } while (input != 'N');

    cout << "Your score is: " << score << endl;
    cout << "Game end." << endl;

    return 0;
}
