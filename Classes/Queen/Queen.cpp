#include "Queen.h"



Queen::Queen() {}
std::string Queen::nameToString() {
	return "Queen";
}
bool Queen::move(int firstCor, int secondCor) {
	if (this->isOutOfDesk(firstCor, secondCor)) throw InvalidCoordinate;
	else {
		if ((firstCor == this->getFirstCoordinate()) || (secondCor == this->getSecondCoordinate())) {
			this->setFirstCoordinate(firstCor);
			this->setSecondCoordinate(secondCor);
			return true;
		}
		else {
			if (abs(firstCor - this->getFirstCoordinate()) == abs(secondCor - this->getSecondCoordinate())) {
				this->setFirstCoordinate(firstCor);
				this->setSecondCoordinate(secondCor);
				return true;
			}
		}
	}
	return false;
}