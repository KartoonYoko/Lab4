#pragma once
#include <string>
#include "../Game/Game.h"


class User
{
public:
	std::string _nickName;
	int _id;
	Game* _lastGame; // id of last game
	std::string _password;


	void setID(int id);
	void setNick(std::string nick);
	void setLastGame(Game* id);
	void setPassword(std::string pass);

	int getID();
	std::string getNick();
	Game* getLastGame();
	std::string getPassword();
};

