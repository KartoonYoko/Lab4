#pragma once
#include "../Chessman/chess.h"

class Bishop :public Chessman {
public:
	Bishop();
	std::string nameToString();
	void move(int firstCor, int secondCor);
};