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


class Pawn : public Chessman {
public:
	Pawn();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};

class Queen : public Chessman {
public:
	Queen();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};


class Bishop :public Chessman {
public:
	Bishop();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};