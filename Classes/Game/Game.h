#pragma once
#include "../ChessBoard/ChessBoard.h"

class User;

class Game
{
public:
	User* _user;
	ChessBoard* _desk;
	int _id;

	Game(); // id == 000000; _desk == nullptr; user == nullptr
	Game(ChessBoard* desk, User* user,int id);

	void setID(int id);
	void setDesk(ChessBoard* desk);
	void setUser(User* user);

	int getID();

};

