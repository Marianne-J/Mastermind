#include <iostream>
#include <string>
#include "move.h"
#pragma once
using namespace std;


class Player {
    /*An object that stores a player's information.*/
    public:
        //Define functions
        Move get_move();
        string get_name();
        void set_move(Move input);
        //Set parameters
        Player(string input) {
            name = input;
        }

    private:
        //Set variables
        Move move;
        string name;
};