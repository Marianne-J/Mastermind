#include <iostream>
#include <string>
using namespace std;

class Console {
    /*Handles getting inputs and displaying outputs for the program.*/
    public:
        //Define functions
        string read(string prompt);
        int read_number(string prompt);
        void write(string text);
};