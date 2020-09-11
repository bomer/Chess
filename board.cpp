/*
*/
#include <iostream>
#include <map>
using namespace std;

enum Piece {blank, blackking, blackqueen, blackbishop, blackknight, blackrook, blackpawn, whiteking, whitequeen, whitebishop, whiteknight, whiterook, whitepawn };

static map<Piece,string> pieceString = {
    {blank, " "},
    {blackking, "♚"},
    {blackqueen, "♛"},
    {blackbishop, "♝"},
    {blackrook, "♜"},
    {blackknight, "♞"},
    {blackpawn, "♟"},
    {whiteking, "♔"}, 
    {whitequeen, "♕"},
    {whitebishop, "♗"},
    {whiterook, "♖"},
    {whiteknight, "♘"},
    {whitepawn, "♙"},
};

Piece Board [8][8] = {
	{blackrook, blackknight,blackbishop, blackking, blackqueen, blackbishop, blackknight, blackrook},
	{blackpawn, blackpawn, blackpawn, blackpawn, blackpawn, blackpawn, blackpawn,blackpawn},
	{},{},{},{},
	{whitepawn, whitepawn, whitepawn, whitepawn, whitepawn, whitepawn, whitepawn,whitepawn},
	{whiterook, whiteknight, whitebishop, whiteking, whitequeen, whitebishop, blackknight, blackrook}
};

string PrintPiece(Piece piece){
    return pieceString[piece];
}

void PrintBoard(){
    cout << "\n";
    cout << "   A B C D E F G H \n";

    for (int x = 0; x < 8; x++){
        cout << x << "  " ;
        for (int i = 0; i < 8; i++)
        {
            /* code */
            cout << PrintPiece(Board[x][i])  << " " ;
        }
        cout << "\n";
    }
    cout << "\n";
    
}

