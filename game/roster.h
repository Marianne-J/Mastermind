#include <iostream>
#include <string>
#include "player.h"
using namespace std;

class Roster {
    public:
        //Define functions
        void add_player(Player player);
        Player get_current();
        void next_player();
    
    private:
        //Define variables
        Player players[2];
        int current = 0;
};