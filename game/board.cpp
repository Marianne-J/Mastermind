#include <iostream>
#include <string>
#include <algorithm>
#include "board.h"
using namespace std;

void Board::apply(Move move_input, int turn_input) {
    /*Applies the move made to the player who made the move.*/
    //Set the player's guess and the current player
    guess = move_input.get_guess();
    turn = turn_input;

    //Determine who is the current player
    if (turn == 0) {
        //Update player 1's guess
        player_1_status[0] = guess;

        //Update player 1's hint
        string hint;
        for (int i = 0; i < 4; i++) {
            if (guess[i] == code[i]) {
                hint += "x";
            } else if (std::find(std::begin(code), std::end(code), guess[i]) != std::end(code)) {
                hint += "o";
            } else {
                hint += "*";
            }
        }
        player_1_status[1] = hint;
    } else if (turn == 1) {
        //Update player 2's guess
        player_2_status[0] = guess;

        //Update player 2's hint
        string hint;
        for (int i = 0; i < 4; i++) {
            if (guess[i] == code[i]) {
                hint += "x";
            } else if (std::find(std::begin(code), std::end(code), guess[i]) != std::end(code)) {
                hint += "o";
            } else {
                hint += "*";
            }
        }
        player_2_status[1] = hint;
    }
}

bool Board::check_win() {
    /*Checks whether or not a player has won the game. Returns a bool.*/
    bool check_win;
    if (guess == code) {
        check_win = true;
    } else {
        check_win = false;
    }

    return check_win;
}

string Board::board_to_string(Player players[2]) {
    /*Converts the current board into a string and returns it.*/
    string player_1 = "Player " + players[0].get_name() + ": " + player_1_status[0] + "," + player_1_status[1] + "\n";
    string player_2 = "Player " + players[1].get_name() + ": " + player_2_status[0] + "," + player_2_status[1] + "\n";

    string status = player_1 + player_2;
    string current_board = "\n--------------------\n" + status + "--------------------\n";

    return current_board;
}

void Board::prepare() {
    /*Creates the board to be used at the start of the game.*/
   //Generate the code
    int generated_code_int = rand() % 1000 + 9999;
    string generated_code = to_string(generated_code_int);

    //Set the code and player statuses
    code = generated_code;
    player_1_status[0] = "----";
    player_1_status[1] = "****";
    player_2_status[0] = "----";
    player_2_status[1] = "****";
}