#pragma once
#include "../Chessman/chess.h"

class Bishop :public Chessman {
public:
	Bishop();
	std::string nameToString();
	bool move(int firstCor, int secondCor);
};