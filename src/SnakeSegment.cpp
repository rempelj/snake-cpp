/*
 * SnakeSegment.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#include "SnakeSegment.h"
#include "Board.h"
#include "Game.h"

void SnakeSegment::moveForward() {
	switch(dir) {
	case N:
		y--;
		break;
	case E:
		x++;
		break;
	case S:
		y++;
		break;
	case W:
		x--;
		break;
	default:
		printf("Unknown direction???");
		break;
	}

	if (x < 0) {
		x = Board::COLS -1;
	}
	if (x >= Board::COLS) {
		x = 0;
	}
	if (y < 0) {
		y = Board::ROWS -1;
	}
	if (y >= Board::ROWS) {
		y = 0;
	}

	Game::instance().getGameplayScreen()->getBoard()->itemMoved(this);
}

std::string SnakeSegment::toString() {
	return std::string("o ");
}
