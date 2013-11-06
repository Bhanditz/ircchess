#include <string>

#include "player.h"

player::player( std::string name, PLAYER_SIDE side ) {
	this->setName(name);
	this->side = side;
}

player::~player( void ) {
	//dtor
}

void player::setName( std::string name ) {
	this->name = name;
}

std::string player::getName( void ) {
	return this->name;
}

PLAYER_SIDE player::getSide( void ) {
	return this->side;
}
