#include "Game.h"



Game::Game() {
	_id = 000000;
	_desk = nullptr;
	_user = nullptr;
}
Game::Game(ChessBoard* desk, User* user, int id) {
	setID(id);
	setDesk(desk);
	setUser(user);
}

void Game::setID(int id) {
	this->_id = id;
}
void Game::setDesk(ChessBoard* desk) {
	this->_desk = desk;
}
void Game::setUser(User* user) {
	this->_user = user;
}

int Game::getID() {
	return this->_id;
}