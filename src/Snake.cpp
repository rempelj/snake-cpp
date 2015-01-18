/*
 * Snake.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#include "Game.h"
#include "Snake.h"
#include "Board.h"

Snake::Snake() {
	for (int i = 0; i < INITIAL_SIZE; i++) {
		SnakeSegment seg(Board::COLS/2, Board::ROWS/2);
		segments.push_back(seg);
	}

}

void Snake::moveForward() {
	for (int i = 0; i < segments.size(); i++) {
		segments.at(i).moveForward();
	}

}
