/*
*/
#include <iostream>
using namespace std;

enum Piece {blackking, blackqueen, blackbishop, blackknight, blackrook, blackpawn, whiteking, whitequeen, whitebishop, whiteknight, whiterook, whitepawn };

Piece Board [8][8] = {
	{blackrook, blackknight,blackbishop, blackking, blackqueen, blackbishop, blackknight, blackrook},
	{blackpawn, blackpawn, blackpawn, blackpawn, blackpawn, blackpawn, blackpawn,blackpawn},
	{},{},{},{},
	{whitepawn, whitepawn, whitepawn, whitepawn, whitepawn, whitepawn, whitepawn,whitepawn},
	{whiterook, whiteknight, whitebishop, whiteking, whitequeen, whitebishop, blackknight, blackrook}
};

void PrintBoard(){
    cout << "\n";
    cout << "  A B C D E F G H \n";
    // Board[8][8]=blackknight;
    for (int x = 0; x < 8; x++){
        cout << "  ";
        for (int i = 0; i < 8; i++)
        {
            /* code */
            cout << Board[x][i]  << " " ;
        }
        cout << "\n";
    }
    cout << "\n";
    
}

