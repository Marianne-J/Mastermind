#include <iostream>
#include <string>
using namespace std;

class Move {
    public:
        //Declare functions
        void apply();
        bool check_win();
        string to_string();
    
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