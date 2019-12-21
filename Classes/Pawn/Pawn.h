#include "../Chessman/chess.h"


class Pawn : public Chessman {
public:
	Pawn();
	std::string nameToString();
	bool move(int firstCor, int secondCor);
};
