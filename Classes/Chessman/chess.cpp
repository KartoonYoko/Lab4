#include <iostream>
#include "chess.h"




	Chessman::Chessman() {
		this->_x = 1;
		this->_y = 1;
		this->_color = 0;
	}
	short Chessman::getSecondCoordinate() {
		return this->_y;
	}
	short Chessman::getFirstCoordinate() {
		return this->_x;
	}
	void Chessman::setSecondCoordinate(int num) {
		if ((num < 1) || (num > 8)) throw InvalidCoordinate;
		else
			this->_y = num;
	}
	void Chessman::setFirstCoordinate(int num) {
		if ((num < 1) || (num > 8)) throw InvalidCoordinate;
		else
			this->_x = num;
	}
	void Chessman::setColor(int color) { 
		if (color > 1 || color < 0) throw InvalidValue;
		else
			this->_color = color;
	}
	short Chessman::getColor() { return this->_color; }
	bool Chessman::isOutOfDesk(int firstCor, int secondCor) {
		if (((firstCor < 1) || (firstCor > 8)) || ((secondCor < 1) || (secondCor > 8)))
			return true;
		else
			return false;
	}
	bool Chessman::isOutOfDesk() {
		return this->isOutOfDesk(this->getFirstCoordinate(), this->getSecondCoordinate());
	}
	
	
	
