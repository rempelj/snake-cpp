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
	int coordsToIndex(int x, int y);
	void setBlank(int index);

public:
	static const int ROWS = 25;
	static const int COLS = 25;

	AbstractItem *tiles[ROWS * COLS];
	Snake snake;

	Board();
	AbstractItem *getItem(int x, int y);
	void itemMoved(AbstractItem *item);
	bool isEmpty(int x, int y);
};




#endif /* BOARD_H_ */
