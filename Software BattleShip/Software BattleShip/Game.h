#ifndef GAME
#define GAME
#include "Board.h"
#include "Player.h"
#include "Ship.h"
#include "Square.h"
class Game
{
public:
	Game();
	void run();

private:
	Player m_player;
	Board m_board;
};

#endif // GAME
