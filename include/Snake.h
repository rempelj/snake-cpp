/*
 * Snake.h
 *
 * Contains Snake Segments
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#ifndef SNAKE_H_
#define SNAKE_H_

#include <vector>
#include "SnakeSegment.h"

class Snake {
public:
	static const int INITIAL_SIZE = 3;

	std::vector<SnakeSegment> segments;

	Snake();
	void moveForward();
};


#endif /* SNAKE_H_ */
