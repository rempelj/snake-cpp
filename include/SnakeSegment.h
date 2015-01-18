/*
 * SnakeSegment.h
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#ifndef SNAKESEGMENT_H_
#define SNAKESEGMENT_H_

#include <string>
#include "AbstractItem.h"

enum Direction { N, E, S, W };

class SnakeSegment : public AbstractItem {
public:
	Direction dir;

	SnakeSegment(int x, int y) : AbstractItem(x,y){
		dir = N;
	}

	void moveForward();
	virtual std::string toString();
};



#endif /* SNAKESEGMENT_H_ */
