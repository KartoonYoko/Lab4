#include "ChessBoard.h"




// вернет true, если клетка содержит фигуру
bool ChessBoard::isFigureOnDesk(int row, int col) {
	if (this->_desk[row][col] == nullptr)
		return false;
	else
		return true;
}
// поставит фигуру на доску; вернет false, если доска заполнена, иначе - true
bool ChessBoard::putOnDesk(Chessman* unit) {
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++) {
			if (!isFigureOnDesk(i, j)) {
				this->_desk[i][j] = unit;
				unit->setFirstCoordinate(i + 1);
				unit->setSecondCoordinate(j + 1);
				return true;
			}
		}
	return false;
}

ChessBoard::ChessBoard() {

	// инициализация доски
	for (int i = 0; i < 8; i++) {
		vector<Chessman*> v(8, nullptr);
		this->_desk.push_back(v);
	}


	for (int i = 0; i < 4; i++) {
		Bishop* buf = new Bishop();;
		this->_bishop.push_back(buf);
		putOnDesk(_bishop[i]);
	}
	for (int i = 0; i < 2; i++) {
		Queen* buf = new Queen;
		this->_queen.push_back(buf);
		putOnDesk(_queen[i]);
	}
	for (int i = 0; i < 16; i++) {
		Pawn* buf = new Pawn;
		this->_pawn.push_back(buf);
		putOnDesk(_pawn[i]);
	}
}
ChessBoard::ChessBoard(const ChessBoard& copy) {

	for (int i = 0; i < 4; i++) {
		Bishop* buf = new Bishop();;
		this->_bishop.push_back(buf);
		this->_bishop[i] = copy._bishop[i];
	}
	for (int i = 0; i < 2; i++) {
		Queen* buf = new Queen;
		this->_queen.push_back(buf);
		this->_queen[i] = copy._queen[i];
	}
	for (int i = 0; i < 16; i++) {
		Pawn* buf = new Pawn;
		this->_pawn.push_back(buf);
		this->_pawn[i] = copy._pawn[i];
	}
}
// оператор копирования присваиванием
ChessBoard& ChessBoard::operator=(const ChessBoard& copy) {
	if (&copy == this)
		return *this;

	for (int i = 0; i < 4; i++) {
		delete this->_bishop[i];
	}
	for (int i = 0; i < 2; i++) {
		delete this->_queen[i];
	}
	for (int i = 0; i < 16; i++) {
		delete this->_pawn[i];
	}



	for (int i = 0; i < 4; i++) {
		Bishop* buf = new Bishop();;
		this->_bishop.push_back(buf);
		this->_bishop[i] = copy._bishop[i];
		putOnDesk(_bishop[i]);
	}
	for (int i = 0; i < 2; i++) {
		Queen* buf = new Queen;
		this->_queen.push_back(buf);
		this->_queen[i] = copy._queen[i];
		putOnDesk(_queen[i]);
	}
	for (int i = 0; i < 16; i++) {
		Pawn* buf = new Pawn;
		this->_pawn.push_back(buf);
		this->_pawn[i] = copy._pawn[i];
		putOnDesk(_pawn[i]);
	}
	return *this;
}
ChessBoard::ChessBoard(ChessBoard&& board) {

	// инициализация доски
	this->_desk = board._desk;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++) {
			board._desk[i][j] = nullptr;
		}


	for (int i = 0; i < 4; i++) {
		this->_bishop[i] = board._bishop[i];
		board._bishop[i] = nullptr;
		putOnDesk(_bishop[i]);
	}
	for (int i = 0; i < 2; i++) {
		this->_queen[i] = board._queen[i];
		board._queen[i] = nullptr;
		putOnDesk(_queen[i]);
	}
	for (int i = 0; i < 16; i++) {
		this->_pawn[i] = board._pawn[i];
		board._pawn[i] = nullptr;
		putOnDesk(_pawn[i]);
	}
}
// оператор копирования перемещением
ChessBoard& ChessBoard::operator=(ChessBoard&& copy) {
	if (&copy == this)
		return *this;

	for (int i = 0; i < 4; i++) {
		delete this->_bishop[i];
	}
	for (int i = 0; i < 2; i++) {
		delete this->_queen[i];
	}
	for (int i = 0; i < 16; i++) {
		delete this->_pawn[i];
	}

	// инициализация доски
	this->_desk = copy._desk;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++) {
			copy._desk[i][j] = nullptr;
		}

	for (int i = 0; i < 4; i++) {
		this->_bishop[i] = copy._bishop[i];
		copy._bishop[i] = nullptr;
	}
	for (int i = 0; i < 2; i++) {
		this->_queen[i] = copy._queen[i];
		copy._queen[i] = nullptr;
	}
	for (int i = 0; i < 16; i++) {
		this->_pawn[i] = copy._pawn[i];
		copy._pawn[i] = nullptr;
	}
	return *this;
}
ChessBoard::~ChessBoard() {
	for (int i = 0; i < 4; i++) {
		delete this->_bishop[i];
	}
	for (int i = 0; i < 2; i++) {
		delete this->_queen[i];
	}
	for (int i = 0; i < 16; i++) {
		delete this->_pawn[i];
	}
}

/*	передвинет фигуру на x, y; вернет false, если передвинуть нельзя.
	если на месте назначения другая фигура, то ее съедят
*/
bool ChessBoard::move(Chessman* unit, int x, int y) {
	if (((x < 1) || (x > 8)) || ((y < 1) || (y > 8)))
		return false;
	if (isFigureOnDesk(x, y)) {
		if (unit->move(x, y)) {
			_desk[x][y] = nullptr;
			return true;
		}
		else
			return false;
	}
	else {
		if (unit->move(x, y)) {
			return true;
		}
		else
			return false;
	}
}