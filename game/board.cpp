#include <iostream>
#include <string>
#include "board.h"
using namespace std;

void Board::apply(Move move_input, int turn_input) {
    guess = move_input.get_guess();
    turn = turn_input;

    if (turn == 0) {
        player_1_status[0] = guess;

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
        player_2_status[0] = guess;

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
    bool check_win;
    if (guess == code) {
        check_win = true;
    } else {
        check_win = false;
    }

    return check_win;
}

string Board::to_string(Player players[2]) {
    string player_1 = "Player " + players[0].get_name() + ": " + player_1_status[0] + "," + player_1_status[1] + "\n";
    string player_2 = "Player " + players[1].get_name() + ": " + player_2_status[0] + "," + player_2_status[1] + "\n";

    string status = player_1 + player_2;
    string current_board = "\n--------------------\n" + status + "--------------------\n";

    return current_board;
}

void Board::prepare() {
    int generated_code_int = rand() % 1000 + 9999;
    string generated_code = to_string(generated_code_int);

    code = generated_code;
    player_1_status[0] = "----";
    player_1_status[1] = "****";
    player_2_status[0] = "----";
    player_2_status[1] = "****";
}