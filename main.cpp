#include <iostream>
#include "board.cpp"
using namespace std;

//Using enum for black + White set of possible pieces. Let's see if this is a good idea or not
// B+W | King, Queen, Bishop, Knight, Rook, Pawn


/*

[x] Create board, print board
[] Print board in colors + Ascii
[] Game Loop
[] Pieces
[] Movments and stubs for checks
[] Piece Checks
[] Win Checks
[] Check + Checkmate + Stalemate?s

*/


int main(){

	Piece test = blackknight;
	bool gameOver = false;
	string move;

	while(!gameOver){
		cout << "hello world \n";
		cout << "♔";
		cout << "\033[1;7minverted red text\033[0m\n";

		PrintBoard();

		cout << "Please enter your turn (format B2 B3) : ";
		getline (cin, move);
		cout << "\nYou entered:  " << move  << '\n';
	}

	return 0;
}

