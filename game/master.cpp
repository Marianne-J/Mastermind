#include <iostream>
#include <string>
#include "board.h"
#include "console.h"
#include "move.h"
#include "player.h"
#include "roster.h"
#include "master.h"
using namespace std;

//Function definitions
void Master::start_game() {
    prepare_game();
    
    while (game_running) {

    }
}

void Master::prepare_game() {
    for (int i = 0; i < number_of_players; i++) {
        string name = console.read("Enter a name for player " + to_string(i) + ": ");
        Player new_player = Player(name);
        new_player.set_move(Move("----"));

        roster.add_player(new_player);
    }
}

void Master::do_outputs() {
    console.write("\n" + board.to_string(roster.players));
}

void Master::get_inputs() {
    Player current_player = roster.get_current();

    console.write(current_player.get_name() + "'s turn:");
    last_guess = console.read("What is your guess? ");
}

void Master::do_updates() {
    Player current_player = roster.get_current();

    Move move = Move(last_guess);
    current_player.set_move(move);
    board.apply(move, roster.current);

    if (board.check_win()) {
        game_running = false;
        console.write("\n" + current_player.get_name() + " wins!");
    }

    roster.next_player();
}