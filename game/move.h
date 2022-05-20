#include <iostream>
#include <string>
#pragma once
using namespace std;


class Move {
    /*An object that stores the player's current guess.*/
    public:
        //Create constructor
        Move() = default;
        //Define functions
        string get_guess();
        void set_guess(string input);
    
    private:
        //Define variables
        string guess;
};//Create constructor for Move
//class Move {Move() = default; };