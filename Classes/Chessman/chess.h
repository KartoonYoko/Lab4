#pragma once
#include <string>


enum ChessEx�eption { InvalidCoordinate, InvalidValue };


class Chessman
{
protected:
	short _x; // ������ ����������
	short _y; // ������ ����������
	short _color; // ���� ������
public:
	Chessman();
	short getFirstCoordinate();
	short getSecondCoordinate();
	short getColor();
	void setFirstCoordinate(int num);
	void setSecondCoordinate(int num);
	void setColor(int color);
	void virtual move(int firstCor, int secondCor) = 0;

	bool isOutOfDesk(int firstCor, int secondCor); // ������ true ���� ���������� ������� �� ������� �����, ����� - false
	bool isOutOfDesk(); // ������ true ���� ���������� �������� ������ ������� �� ������� �����, ����� - false
};


class Pawn1 : public Chessman {
public:
	Pawn1();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};

class Queen1 : public Chessman {
public:
	Queen1();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};


class Bishop1 :public Chessman {
public:
	Bishop1();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};