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
	int getFirstCoordinate();
	int getSecondCoordinate();
	int getColor();
	void setFirstCoordinate(int num);
	void setSecondCoordinate(int num);
	void setColor(int color);
	void move(int firstCor, int secondCor);

	bool isOutOfDesk(int firstCor, int secondCor); // ������ true ���� ���������� ������� �� ������� �����, ����� - false

	template < typename T>
	void eat(T object) {
		~object();
	}
};


class Pawn : public Chessman {
public:
	std::string nameToString();
	void move(int firstCor, int secondCor);
};

class Queen : public Chessman {
public:
	std::string nameToString();
	void move(int firstCor, int secondCor);
};


class Bishop :public Chessman {
public:
	std::string nameToString();
	void move(int firstCor, int secondCor);
};