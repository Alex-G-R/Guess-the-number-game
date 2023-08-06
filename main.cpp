#include <iostream>
#include <stdlib.h> // losowanie liczb
#include <time.h> // czas

using namespace std;
 
int main(){

    int guesses = 0, randomNumber, userAnwser;

    srand(time(NULL));
    randomNumber = rand() % 20 + 1;

    while (userAnwser != randomNumber)
    {
        cout << "From 1-20 what number are you guessing? "; cin >> userAnwser; cout << endl;
        if(userAnwser == randomNumber){
            guesses++;
            goto gameWon;
        } else if (userAnwser < randomNumber){
            guesses++;
            cout << "Your number is too low! Try again" << endl;
        } else if (userAnwser > randomNumber) {
            guesses++;
            cout << "Your number is too high! Try again" << endl;
        } else {
            cout << "Error occured!" << endl;
        }
    }

    gameWon:
        cout << "Congratulations you won in " << guesses << " guesses" << endl;

    int dontCloseTheWIndowBro;
    cin >> dontCloseTheWIndowBro;
    return 0;
}