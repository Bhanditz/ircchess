#include <string>

#include "game.h"
#include "player.h"

game::game(std::string white_player_name, std::string black_player_name)
	: white_player(new player(white_player_name, WHITE)), black_player(new player(black_player_name, BLACK)) {
}

game::~game( void ) {
	//dtor
}
