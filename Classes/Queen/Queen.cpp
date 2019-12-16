#include "Queen.h"



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
			if (abs(firstCor - this->getFirstCoordinate()) == abs(secondCor - this->getSecondCoordinate())) {
				this->setFirstCoordinate(firstCor);
				this->setSecondCoordinate(secondCor);
			}
		}
	}
}