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
