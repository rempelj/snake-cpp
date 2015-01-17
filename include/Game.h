/*
 * Game.h
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#ifndef GAME_H_
#define GAME_H_

#include "GameplayScreen.h"

class Game {
private:
	Screen screens[1];
	Screen activeScreen;

public:
	Game();
	void update();

};


#endif /* GAME_H_ */
