#include <iostream>
#include "chess.h"





	int Chessman::getSecondCoordinate() {
		return this->_y;
	}
	int Chessman::getFirstCoordinate() {
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
	int Chessman::getColor() { return this->_color; }
	void Chessman::move(int firstCor, int secondCor) {}
	
	
	std::string Pawn::nameToString() {
		return "I'm pawn.";
	}
	void Pawn::move(int firstCor, int secondCor) {
		if ( ((firstCor < 1) || (firstCor > 8)) & ((secondCor < 1) || (secondCor > 8)) ) throw InvalidCoordinate;
		else {
			if ((this->getSecondCoordinate() == secondCor) & (firstCor - 1 == this->getFirstCoordinate())) {
				this->setFirstCoordinate(firstCor);
			}
		}
	}


	std::string Queen::nameToString() {
		return "I'm Queen!";
	}
	void Queen::move(int firstCor, int secondCor) {
		if (((firstCor < 1) || (firstCor > 8))& ((secondCor < 1) || (secondCor > 8))) throw InvalidCoordinate;
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


	std::string Bishop::nameToString() {
		return "I'm Bishop!";
	}
	void Bishop::move(int firstCor, int secondCor) {
		if (((firstCor < 1) || (firstCor > 8))& ((secondCor < 1) || (secondCor > 8))) throw InvalidCoordinate;
		else {
			if ( abs(firstCor - this->getFirstCoordinate()) == abs(secondCor - this->getSecondCoordinate()) )
			{
				this->setFirstCoordinate(firstCor);
				this->setSecondCoordinate(secondCor);
			}
		}
	}