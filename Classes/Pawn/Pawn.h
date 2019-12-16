#include "../Chessman/chess.h"


class Pawn : public Chessman {
public:
	Pawn();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};
