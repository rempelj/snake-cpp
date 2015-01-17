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
public:
	virtual void update(){
		printf("base screen update (this shouldn't be happening)\n");
	}
};


#endif /* SCREEN_H_ */
