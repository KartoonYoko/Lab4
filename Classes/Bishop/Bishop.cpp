#include "Bishop.h"



Bishop::Bishop() {}
std::string Bishop::nameToString() {
	return "Bishop";
}
bool Bishop::move(int firstCor, int secondCor) {
	if (this->isOutOfDesk(firstCor, secondCor)) throw InvalidCoordinate;
	else {
		if (abs(firstCor - this->getFirstCoordinate()) == abs(secondCor - this->getSecondCoordinate()))
		{
			this->setFirstCoordinate(firstCor);
			this->setSecondCoordinate(secondCor);
			return true;
		}
	}
	return false;
}