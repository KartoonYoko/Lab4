#include "../Chessman/chess.h"


class Queen : public Chessman {
public:
	Queen();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};
