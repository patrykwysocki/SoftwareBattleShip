#ifndef BOARD
#define BOARD

class Board
{
public:
	Board();
	void update();
	void render();

private:
	int m_size;
	int MAX_ROWS = 10;
	int MAX_COLS = 10;

};

#endif // !BOARD

