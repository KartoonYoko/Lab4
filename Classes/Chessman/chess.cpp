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
	
	
	Pawn1::Pawn1() {}
	std::string Pawn1::nameToString() {
		return "I'm pawn.";
	}
	void Pawn1::move(int firstCor, int secondCor) {
		if (this->isOutOfDesk(firstCor, secondCor)) throw InvalidCoordinate;
		else {
			if ((this->getSecondCoordinate() == secondCor) && (firstCor - 1 == this->getFirstCoordinate())) {
				this->setFirstCoordinate(firstCor);
			}
		}
	}

	Queen1::Queen1() {}
	std::string Queen1::nameToString() {
		return "I'm Queen!";
	}
	void Queen1::move(int firstCor, int secondCor) {
		if (this->isOutOfDesk(firstCor, secondCor)) throw InvalidCoordinate;
		else {
			if ((firstCor == this->getFirstCoordinate()) || (secondCor == this->getSecondCoordinate())) {
				this->setFirstCoordinate(firstCor);
				this->setSecondCoordinate(secondCor);
			}
			else {
				if ( abs(firstCor - this->getFirstCoordinate()) == abs(secondCor - this->getSecondCoordinate()) ) {
					this->setFirstCoordinate(firstCor);
					this->setSecondCoordinate(secondCor);
				}
			}
		}
	}

	Bishop1::Bishop1() {}
	std::string Bishop1::nameToString() {
		return "I'm Bishop!";
	}
	void Bishop1::move(int firstCor, int secondCor) {
		if (this->isOutOfDesk(firstCor, secondCor)) throw InvalidCoordinate;
		else {
			if ( abs(firstCor - this->getFirstCoordinate()) == abs(secondCor - this->getSecondCoordinate()) )
			{
				this->setFirstCoordinate(firstCor);
				this->setSecondCoordinate(secondCor);
			}
		}
	}