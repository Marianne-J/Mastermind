#include <iostream>
#include <string>
#include "board.cpp"
#include "console.cpp"
#include "move.cpp"
#include "player.cpp"
#include "roster.cpp"
using namespace std;

class Master {
    public:
        //Declare functions
        void start_game();
        //Declare variables
        string last_class = "none";

    private:
        //Declare classes
        Board board;
        Console console;
        Move move;
        Player player;
        Roster roster;
        //Declare functions
        void prepare_game();
        void do_outputs();
        void get_inputs();
        void do_updates();
        //Declare variables
        int number_of_players = 2;
        bool game_running = true;

};


//Main function
int main() {

}

//Function definitions
void start_game() {

}