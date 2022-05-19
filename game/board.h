#include <iostream>
#include <string>
#include "move.h"
#include "player.h"
#pragma once
using namespace std;

class Board {
    public:
        //Declare classes
        Move move;
        Player player;
        //Declare functions
        void apply(Move move_input, int turn_input);
        bool check_win();
        string board_to_string(Player players[2]);
    
    private:
        //Declare functions
        void prepare();
        //Declare variables
        string code;
        string guess;
        string player_1_status[2];
        string player_2_status[2];
        int turn = 0;
};