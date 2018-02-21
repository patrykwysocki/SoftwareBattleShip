#ifndef SHIP
#define SHIP
#include <SFML\Graphics.hpp>
class Ship
{
public:
	Ship();
	Ship(int row, int col);
private:
	void setPosition();
	void setDirection();
	bool isAlive();
	bool m_alive;
	sf::Vector2f m_direction;
	enum shipType{small,medium, big};

};
#endif // !SHIP

