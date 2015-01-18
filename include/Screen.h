/*
 * Screen.h
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <stdio.h>

class Screen {
protected:
	Screen(){}

public:
	virtual void update() = 0;

	virtual ~Screen(){}
};


#endif /* SCREEN_H_ */
