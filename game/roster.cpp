#include <iostream>
#include <string>
#include <algorithm>
#include "roster.h"
using namespace std;

void Roster::add_player(Player player) {
    /*Adds player to the roster.*/
    if (sizeof(players) < 2) {
        players[add_player_index] = player;
    }
}

Player Roster::get_current() {
    /*Returns the current player.*/
    return players[current];
}

void Roster::next_player() {
    /*Changes the turn to the next player.*/
    current = (current + 1) % sizeof(players);
}