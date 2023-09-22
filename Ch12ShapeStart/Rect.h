/*
 * Rect.h
 *
 *  Created on: 2023. 9. 21.
 *      Author: KOSCOM
 */

#ifndef RECT_H_
#define RECT_H_

#include "Shape.h"
class Rect : 	public Shape
{
	int width;
	int height;
public:
	Rect();
	Rect(int, int,int,int);
	~Rect();
	void draw() const override;	// override Ű���� ���!
	double getArea() const;
};


#endif /* RECT_H_ */
