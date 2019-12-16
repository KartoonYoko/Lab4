#pragma once


#include "../Bishop/Bishop.h"
#include "../Pawn/Pawn.h"
#include "../Queen/Queen.h"
#include <vector>


using namespace std;
class ChessBoard
{
public:
	vector<Pawn> _pawn;
	vector<Bishop> _bishop;
	Queen _queen;



	ChessBoard(short whitePawn = 8, short blackPawn = 8, short whiteBishop = 2, short blackBishop = 2, short whiteQueen = 1, short blackQueen = 1){
		for (int i = 0; i < whitePawn; i++) {
			this->_pawn.push_back()
		}
	}
};

