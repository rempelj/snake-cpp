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
	GameplayScreen gameplayScreen;
	Screen *activeScreen;

	Game();
	Game(Game const&);
	void operator=(Game const&);

public:
	static Game& instance()
	{
		static Game instance;
		return instance;
	}

	void update();

	GameplayScreen *getGameplayScreen() {
		return &gameplayScreen;
	}
};


#endif /* GAME_H_ */
