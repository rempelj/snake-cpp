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
	virtual void update();
};

#endif /* GAMESCREEN_H_ */
