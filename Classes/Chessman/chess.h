#pragma once
#include <string>


enum ChessExсeption { InvalidCoordinate, InvalidValue };


class Chessman
{
protected:
	short _x; // первая координата
	short _y; // вторая координата
	bool _color; // цвет шахмат
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

	bool isOutOfDesk(int firstCor, int secondCor) const; // вернет true если координаты выходят за пределы доски, иначе - false
	bool isOutOfDesk() const; // вернет true если координаты текущего класса выходят за пределы доски, иначе - false
};
