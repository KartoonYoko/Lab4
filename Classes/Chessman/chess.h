#pragma once
#include <string>


enum ChessEx�eption { InvalidCoordinate, InvalidValue };


class Chessman
{
protected:
	short _x; // ������ ����������
	short _y; // ������ ����������
	bool _color; // ���� ������
public:
	Chessman();
	short getFirstCoordinate() const;
	short getSecondCoordinate() const;
	bool getColor() const;
	void setFirstCoordinate(int num);
	void setSecondCoordinate(int num);
	void setColor(bool color);
	bool virtual move(int firstCor, int secondCor) = 0;
	std::string virtual nameToString() = 0;

	bool isOutOfDesk(int firstCor, int secondCor) const; // ������ true ���� ���������� ������� �� ������� �����, ����� - false
	bool isOutOfDesk() const; // ������ true ���� ���������� �������� ������ ������� �� ������� �����, ����� - false
};
