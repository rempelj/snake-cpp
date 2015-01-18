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
		setBlank(i);
	}
}

AbstractItem *Board::getItem(int x, int y) {
	int i = coordsToIndex(x,y);
	return tiles[i];
}

std::pair<int,int> Board::indexToCoords(int index) {
	int x = index % COLS;
	int y = index / COLS;

	return std::pair<int,int> (x,y);
}

int Board::coordsToIndex(int x, int y) {
	return x + (y * COLS);
}

void Board::itemMoved(AbstractItem *item) {
	for(int i = 0; i < COLS * ROWS; i++){
		if (tiles[i] == item) {
			setBlank(i);
		}
	}

	tiles[coordsToIndex(item->x, item->y)] = item;
}

void Board::setBlank(int index) {
	std::pair<int,int> pos = indexToCoords(index);
	tiles[index] = new NoItem(pos.first, pos.second);
}
