/*
 * GameScreen.h
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#ifndef GAMESCREEN_H_
#define GAMESCREEN_H_

#include "Screen.h"
#include "Board.h"

class GameplayScreen : public Screen {
private:
	Board board;

public:
	int updateInterval;

	GameplayScreen();

	virtual void update();

	Board *getBoard() {
		return &board;
	}
};

#endif /* GAMESCREEN_H_ */
