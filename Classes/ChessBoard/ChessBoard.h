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

	// ������ true, ���� ������ �������� ������
	bool isFigureOnDesk(int row, int col);
	// �������� ������ �� �����; ������ false, ���� ����� ���������, ����� - true
	bool putOnDesk(Chessman* unit);

	ChessBoard();
	ChessBoard(const ChessBoard& copy);
	// �������� ����������� �������������
	ChessBoard& operator=(const ChessBoard& copy);
	ChessBoard(ChessBoard&& board);
	// �������� ����������� ������������
	ChessBoard& operator=(ChessBoard&& copy);
	~ChessBoard();

	/*	���������� ������ �� x, y; ������ false, ���� ����������� ������.
		���� �� ����� ���������� ������ ������, �� �� ������
	*/
	bool move(Chessman* unit, int x, int y);
	
};

