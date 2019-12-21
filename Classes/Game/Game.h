#pragma once
#include "../ChessBoard/ChessBoard.h"
class Game
{
public:
	ChessBoard* _desk;
	int _id;

	Game(); // id == 000000; _desk == nullptr
	Game(ChessBoard* desk, int id);

	void setID(int id);
	void setDesk(ChessBoard* desk);

	int getID();

};

