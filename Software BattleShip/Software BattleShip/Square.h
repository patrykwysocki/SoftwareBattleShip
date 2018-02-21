#ifndef SQUARE
#define SQUARE

class Square
{
public:
	Square();
	Square(int m_row, int m_col);
	void update();
	void render();
private:
	bool m_hit;
	bool m_containsShip;
	int m_rowPos;
	int m_colPos;

};
#endif // !SQUARE

