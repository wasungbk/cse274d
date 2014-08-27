/*
 * rectangle.cpp
 *
 *  Created on: Aug 27, 2014
 *      Author: wasungbk
 */
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(){
	width = 5;
	height =10;
}
void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int Rectangle::area(){
	return width*height;
}


