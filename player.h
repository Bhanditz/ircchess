#ifndef PLAYER_H
#define PLAYER_H

#include <string>

enum PLAYER_SIDE {
	BLACK,
	WHITE
};

class player
{
	public:
		player(std::string name, PLAYER_SIDE side);
		virtual ~player( void );

		std::string getName( void );
		void setName(std::string name);

		PLAYER_SIDE getSide( void );
	protected:
	private:
		std::string name;
		PLAYER_SIDE side;
};

#endif // PLAYER_H
