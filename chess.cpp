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
	
	
	
	void Pawn::speak() {
		std::cout << "I'm pawn." << std::endl;
	}
	void Pawn::move(int firstCor, int secondCor) {
		if ( ((firstCor < 1) || (firstCor > 8)) & ((secondCor < 1) || (secondCor > 8)) ) throw InvalidCoordinate;
		else {
			if ((this->getSecondCoordinate() == secondCor) & (firstCor - 1 == this->getFirstCoordinate())) {
				this->setFirstCoordinate(firstCor);
			}
		}
	}


	void Queen::speak() {
		std::cout << "I'm Queen!" << std::endl;
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


	void Bishop::speak() {
		std::cout << "I'm Bishop!" << std::endl;
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