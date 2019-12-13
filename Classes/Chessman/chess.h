#pragma once
#include <string>


enum ChessExсeption { InvalidCoordinate, InvalidValue };


class Chessman
{
protected:
	short _x; // первая координата
	short _y; // вторая координата
	short _color; // цвет шахмат
public:
	Chessman();
	short getFirstCoordinate();
	short getSecondCoordinate();
	short getColor();
	void setFirstCoordinate(int num);
	void setSecondCoordinate(int num);
	void setColor(int color);
	void virtual move(int firstCor, int secondCor) = 0;

	bool isOutOfDesk(int firstCor, int secondCor); // вернет true если координаты выходят за пределы доски, иначе - false
	bool isOutOfDesk(); // вернет true если координаты текущего класса выходят за пределы доски, иначе - false
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