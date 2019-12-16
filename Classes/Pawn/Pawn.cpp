#include "Pawn.h"


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

