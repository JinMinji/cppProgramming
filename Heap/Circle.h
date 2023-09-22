/*
 * Circle.h
 *
 *  Created on: 2023. 9. 19.
 *      Author: KOSCOM
 */

// # pragma once		//이 한줄로 대체 가능

#ifndef CIRCLE_H_
#define CIRCLE_H_


class Circle  //상속으로 확장
{
private://access
	int x; //데이터 멤버=필드
	int y;
	int radius;
public:
	Circle(int=0,int=0,int=0);//기본 매개변수
	~Circle();//소멸자
	void Draw() const;//선언
	double GetArea()const;

	void SetRadius(int r)
	{
	   radius =r;
	}
	void SetX(int);//접근자
	int GetX();
};

#endif /* CIRCLE_H_ */
