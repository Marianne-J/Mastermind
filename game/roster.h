#include <iostream>
#include <string>
#include <algorithm>
#include "player.h"
#pragma once
using namespace std;

class Roster {
    public:
        //Define functions
        void add_player(Player player);
        Player get_current();
        void next_player();
        //Define variables
        Player players[2];
        int current = 0;
    
    private:
        //Define variables
        int add_player_index = 0;
};