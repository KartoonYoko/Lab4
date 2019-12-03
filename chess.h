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
	int getFirstCoordinate();
	int getSecondCoordinate();
	int getColor();
	void setFirstCoordinate(int num);
	void setSecondCoordinate(int num);
	void setColor(int color);
	void move(int firstCor, int secondCor);

	bool isOutOfDesk(int firstCor, int secondCor); // вернет true если координаты выходят за пределы доски, иначе - false

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