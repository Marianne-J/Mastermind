#include <iostream>
#include <string>
#include <algorithm>
#include "roster.h"
using namespace std;

void Roster::add_player(Player player) {
    if (! (std::find(std::begin(players), std::end(players), player) != std::end(players))) {
        players[add_player_index] = player;
    }
}

Player Roster::get_current() {
    return players[current];
}

void Roster::next_player() {
    current = (current + 1) % sizeof(players);
}