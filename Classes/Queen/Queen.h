#include "../Chessman/chess.h"


class Queen : public Chessman {
public:
	Queen();
	std::string nameToString();
	bool move(int firstCor, int secondCor);
};
