/*
 * Board.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#include "Board.h"
#include "Food.h"
#include "NoItem.h"

Board::Board() {
	for(int i = 0; i < COLS * ROWS; i++){
		std::pair<int,int> pos = indexToCoords(i);
		tiles[i] = new NoItem(pos.first, pos.second);
	}
}

AbstractItem *Board::getItem(int x, int y) {
	int i = x + (y * COLS);
	return tiles[i];
}

std::pair<int,int> Board::indexToCoords(int index) {
	int x = index % COLS;
	int y = index / COLS;

	return std::pair<int,int> (x,y);
}
