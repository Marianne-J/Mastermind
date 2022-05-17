#include <iostream>
#include <string>
#include "player.h"
using namespace std;


Move Player::get_move() {
    /*Returns the player's current move.*/
    return move;
}

string Player::get_name() {
    /*Returns the player's name.*/
    return name;
}

void Player::set_move(Move input) {
    /*Sets the player's name.*/
    move = input;
}