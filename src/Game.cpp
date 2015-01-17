/*
 * Game.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#include "../include/Game.h"

Game::Game() {
	// init all screens
	GameplayScreen gameplayScreen;

	// store them in the array
	screens[0] = gameplayScreen;

	activeScreen = gameplayScreen;
}

void Game::update() {
	activeScreen.update();
}
