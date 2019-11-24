#pragma once



enum ChessExсeption { InvalidCoordinate };

class Chessman
{
protected:
	int _x; // первая координата
	int _y; // вторая координата
public:
	int getFirstCoordinate();
	int getSecondCoordinate();
	void setFirstCoordinate(int num);
	void setSecondCoordinate(int num);
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