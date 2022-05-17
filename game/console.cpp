#include <iostream>
#include <string>
#include "console.h"
using namespace std;


string Console::read(string prompt) {
    /*Takes input from the player.*/
    string response;
    
    cout << prompt;
    cin >> response;
    
    return response;
}

int Console::read_number(string prompt) {
    /*Takes input from the player, specifically the player's guess.*/
    int response;

    cout << prompt;
    cin >> response;

    return response;
}

void Console::write(string text) {
    /*Displays a message to the terminal.*/
    cout << text;
}