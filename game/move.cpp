#include <iostream>
#include <string>
#include "move.h"
using namespace std;


string Move::get_guess() {
    /*Returns the player's current guess.*/

    return guess;
}

void Move::set_guess(string input) {
    /*Sets the player's current guess.*/
    guess = input;
}