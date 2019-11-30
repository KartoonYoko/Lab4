#pragma once



enum ChessExсeption { InvalidCoordinate, InvalidValue };


class Chessman
{
protected:
	int _x; // первая координата
	int _y; // вторая координата
	int _color; // цвет шахмат
public:
	int getFirstCoordinate();
	int getSecondCoordinate();
	int getColor();
	void setFirstCoordinate(int num);
	void setSecondCoordinate(int num);
	void setColor(int color);

	template < typename T>
	void eat(T object) {
		~object();
	}
};


class Pawn : public Chessman {
public:
	void speak();
	void move(int firstCor, int secondCor);
};

class Queen : public Chessman {
public:
	void speak();
	void move(int firstCor, int secondCor);
};


class Bishop :public Chessman {
public:
	void speak();
	void move(int firstCor, int secondCor);
};