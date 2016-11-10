#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

enum direction {
	UP = 1,
	DOWN = 2,
	LEFT = 4,
	RIGHT = 8
};
typedef enum direction Direction;

enum gameState {
	GAME_OVER = 1,
	GAME_WIN = 2,
	GAME_CONTINUE = 4
};
typedef enum gameState GameState;

enum gameNum
{
	Game_2 = 2,
	Game_4 = 4,
	Game_8 = 8,
	Game_16 = 16,
	Game_32 = 32,
	Game_64 = 64,
	Game_128 = 128,
	Game_256 = 256,
	Game_512 = 512,
	Game_1024 = 1024,
	Game_2048 = 2048
};

typedef enum gameNum GameNum;

class Board {
	int const ROW;
	int const COL;
	int** game;
public:
	Board(int row = 4, int col = 4);
	~Board();
	int update(Direction d);
	int shiftLeft();
	int shiftRight();
	int shiftUp();
	int shiftDown();
	void createNumber();
	Direction getInput();
	GameState judge();
};

Board::Board(int row, int col) : ROW(row), COL(col) 
{	
	game = new int*[ROW];
	for (int i = 0; i < ROW; ++i)
		game[i] = new int[COL];
}

Board::~Board()
{
	for (int i = 0; i < ROW; i++)
	{
		delete[] game[i];
	}
	delete[] game;
}

int Board::update(Direction d)
{
	int result;
	switch (d)
	{
	case UP:
		result = shiftUp();
		break;
	case DOWN:
		result = shiftDown();
		break;
	case LEFT:
		result = shiftLeft();
		break;
	case RIGHT:
		result = shiftRight();
		break;
	}
	return result;
}

//Note: Once a piece has merged in a shift operation,
//		it cannot merge again.
int Board::shiftUp()
{
	return 0;
}

int Board::shiftDown()
{
	return 0;
}

int Board::shiftLeft()
{
	return 0;
}

int Board::shiftRight()
{
	return 0;
}

void Board::createNumber()
{

}

Direction Board::getInput()
{

	return UP;
}

GameState Board::judge()
{
	
	return GAME_CONTINUE;
}