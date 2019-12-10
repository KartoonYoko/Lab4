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
	
	
	Pawn::Pawn() {}
	std::string Pawn::nameToString() {
		return "I'm pawn.";
	}
	void Pawn::move(int firstCor, int secondCor) {
		if (this->isOutOfDesk(firstCor, secondCor)) throw InvalidCoordinate;
		else {
			if ((this->getSecondCoordinate() == secondCor) && (firstCor - 1 == this->getFirstCoordinate())) {
				this->setFirstCoordinate(firstCor);
			}
		}
	}

	Queen::Queen() {}
	std::string Queen::nameToString() {
		return "I'm Queen!";
	}
	void Queen::move(int firstCor, int secondCor) {
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

	Bishop::Bishop() {}
	std::string Bishop::nameToString() {
		return "I'm Bishop!";
	}
	void Bishop::move(int firstCor, int secondCor) {
		if (this->isOutOfDesk(firstCor, secondCor)) throw InvalidCoordinate;
		else {
			if ( abs(firstCor - this->getFirstCoordinate()) == abs(secondCor - this->getSecondCoordinate()) )
			{
				this->setFirstCoordinate(firstCor);
				this->setSecondCoordinate(secondCor);
			}
		}
	}