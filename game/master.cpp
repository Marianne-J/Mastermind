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
    /*Starts the game.*/
    prepare_game();
    
    while (game_running) {
        do_outputs();
        get_inputs();
        do_updates();
    }
}

void Master::prepare_game() {
    /*Prepares the game.*/
    for (int i = 0; i < number_of_players; i++) {
        //Set player names and moves
        string name = console.read("Enter a name for player " + to_string(i) + ": ");
        Player new_player = Player();
        new_player.set_name(name);
        Move move_object = Move();
        move.set_guess("----");
        new_player.set_move(move);

        //Add player to the roster
        roster.add_player(new_player);
    }
}

void Master::do_outputs() {
    /*Calls the console to display the current board.*/
    console.write("\n" + board.board_to_string(roster.players));
}

void Master::get_inputs() {
    /*Calls the console to take the current player's input.*/
    Player current_player = roster.get_current();

    console.write(current_player.get_name() + "'s turn:");
    last_guess = console.read("What is your guess? ");
}

void Master::do_updates() {
    /*Updates the game based on the player's input.*/
    //Get the current player
    Player current_player = roster.get_current();

    //Set the player's move and call Board to apply changes
    Move move_object = Move();
    move_object.set_guess(last_guess);
    Move move = move_object;
    current_player.set_move(move);
    board.apply(move, roster.current);

    //Check if the game is over
    if (board.check_win()) {
        game_running = false;
        console.write("\n" + current_player.get_name() + " wins!");
    }

    //Move to the next player
    roster.next_player();
}