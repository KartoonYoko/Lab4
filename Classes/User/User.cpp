#include "User.h"


void User::setID(int id) { _id = id; }
void User::setNick(std::string nick) { _nickName = nick; }
void User::setLastGame(Game* game) { _lastGame = game; }
void User::setPassword(std::string pass) { _password = pass; }

int User::getID() { return _id; }
std::string User::getNick() { return _nickName; }
Game* User::getLastGame() { return _lastGame; }
std::string User::getPassword() { return _password; }
