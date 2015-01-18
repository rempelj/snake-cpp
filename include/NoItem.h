/*
 * NoItem.h
 *
 *  Created on: Jan 17, 2015
 *      Author: justinrempel
 */

#ifndef NOITEM_H_
#define NOITEM_H_

#include <string>
#include "AbstractItem.h"

class NoItem : public AbstractItem{
public:
	NoItem(int x, int y) : AbstractItem(x,y) {}

	virtual std::string toString();
};



#endif /* NOITEM_H_ */
