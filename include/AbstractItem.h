/*
 * AbstractItem.h
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <string>

class AbstractItem {
protected:
	AbstractItem(int x, int y){
		this->x = x;
		this->y = y;
	}

public:
	int x;
	int y;

	virtual std::string toString() {
		return std::string("x");
	}

	virtual ~AbstractItem(){}
};



#endif /* ITEM_H_ */
