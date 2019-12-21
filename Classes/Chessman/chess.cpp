#include <iostream>
#include "chess.h"




	Chessman::Chessman() {
		this->_x = 1;
		this->_y = 1;
		this->_color = false;
	}
	short Chessman::getSecondCoordinate() const{
		return this->_y;
	}
	short Chessman::getFirstCoordinate() const{
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
	void Chessman::setColor(bool color) {
			this->_color = color;
	}
	bool Chessman::getColor() const{ return this->_color; }
	bool Chessman::isOutOfDesk(int firstCor, int secondCor) const{
		if (((firstCor < 1) || (firstCor > 8)) || ((secondCor < 1) || (secondCor > 8)))
			return true;
		else
			return false;
	}
	bool Chessman::isOutOfDesk() const{
		return this->isOutOfDesk(this->getFirstCoordinate(), this->getSecondCoordinate());
	}
	
	
	
