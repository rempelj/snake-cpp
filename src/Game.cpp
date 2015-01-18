/*
 * Game.cpp
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#include "../include/Game.h"

Game::Game() {
	activeScreen = &gameplayScreen;
}

void Game::update() {
	activeScreen->update();
}
