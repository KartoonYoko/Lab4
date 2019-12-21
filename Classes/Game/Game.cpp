#include "Game.h"



Game::Game() {
	_id = 000000;
	_desk = nullptr;
}
Game::Game(ChessBoard* desk, int id) {
	setID(id);
	setDesk(desk);
}

void Game::setID(int id) {
	this->_id = id;
}
void Game::setDesk(ChessBoard* desk) {
	this->_desk = desk;
}

int Game::getID() {
	return this->_id;
}