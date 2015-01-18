/*
 * Board.h
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#ifndef BOARD_H_
#define BOARD_H_

#include <utility>
#include "AbstractItem.h"
#include "Snake.h"

class Board {
private:
	std::pair<int,int> indexToCoords(int i);

public:
	static const int ROWS = 5;
	static const int COLS = 5;

	AbstractItem *tiles[ROWS * COLS];
	Snake snake;

	Board();
	AbstractItem *getItem(int row, int col);
};




#endif /* BOARD_H_ */
