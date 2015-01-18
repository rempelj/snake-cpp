/*
 * GameplayScreen.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#include <stdio.h>
#include "GameplayScreen.h"
#include <unistd.h>

GameplayScreen::GameplayScreen() {
	updateInterval = 1000000;
}

void GameplayScreen::update(){
	board.snake.moveForward();

	// "draw" the board
	printf("\n");
	for(int y = 0; y < board.ROWS; y++) {
		for(int x = 0; x < board.COLS; x++) {
			AbstractItem *item = board.getItem(x,y);
			printf(item->toString().c_str());
		}
		printf("\n");
	}

	usleep(updateInterval);
}
