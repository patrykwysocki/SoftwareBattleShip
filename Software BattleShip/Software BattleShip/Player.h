#ifndef PLAYER
#define PLAYER
#include <string>
class Player
{
public:
	Player();
	void takeGuess();
	void placeShip();
private:
	std::string m_name;
	bool m_win;
	int m_score;
	bool m_turn;
};

#endif // !PLAYER

