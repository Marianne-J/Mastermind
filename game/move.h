#include <iostream>
#include <string>
using namespace std;


class Move {
    /*An object that stores the player's current guess.*/
    public:
        //Define functions
        string get_guess();
        //Set parameters
        Move(string input) {
            guess = input;
        }
    
    private:
        //Define variables
        string guess;
};

//Create constructor for Move
class Move {Move() = default; };