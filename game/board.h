#include <iostream>
#include <string>
#include "move.h"
#include "player.h"
using namespace std;

class Board {
    public:
        //Declare functions
        void apply(Move move_input, int turn_input);
        bool check_win();
        string to_string(Player players[2]);
    
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