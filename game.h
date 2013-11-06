#ifndef GAME_H
#define GAME_H

#include <string>

#include "player.h"

class game
{
	public:
		game(std::string white_player, std::string black_player);
		virtual ~game( void );
	protected:
	private:
		player *white_player;
		player *black_player;
};

#endif // GAME_H
