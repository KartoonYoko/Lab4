#pragma once


#include "../Bishop/Bishop.h"
#include "../Pawn/Pawn.h"
#include "../Queen/Queen.h"
#include <vector>
#include "../Chessman/chess.h"

using namespace std;
class ChessBoard
{
private:

	vector<vector<Chessman*>> _desk;

public:
	vector<Pawn*> _pawn;
	vector<Bishop*> _bishop;
	vector<Queen*> _queen;

	// вернет true, если клетка содержит фигуру
	bool isFigureOnDesk(int row, int col);
	// поставит фигуру на доску; вернет false, если доска заполнена, иначе - true
	bool putOnDesk(Chessman* unit);

	ChessBoard();
	ChessBoard(const ChessBoard& copy);
	// оператор копирования присваиванием
	ChessBoard& operator=(const ChessBoard& copy);
	ChessBoard(ChessBoard&& board);
	// оператор копирования перемещением
	ChessBoard& operator=(ChessBoard&& copy);
	~ChessBoard();

	/*	передвинет фигуру на x, y; вернет false, если передвинуть нельзя.
		если на месте назначения другая фигура, то ее съедят
	*/
	bool move(Chessman* unit, int x, int y);
	
};

