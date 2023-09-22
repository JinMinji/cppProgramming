/*
 * Circle.h
 *
 *  Created on: 2023. 9. 19.
 *      Author: KOSCOM
 */

// # pragma once		//�� ���ٷ� ��ü ����

#ifndef CIRCLE_H_
#define CIRCLE_H_


class Circle  //������� Ȯ��
{
private://access
	int x; //������ ���=�ʵ�
	int y;
	int radius;
public:
	Circle(int=0,int=0,int=0);//�⺻ �Ű�����
	~Circle();//�Ҹ���
	void Draw() const;//����
	double GetArea()const;

	void SetRadius(int r)
	{
	   radius =r;
	}
	void SetX(int);//������
	int GetX();
};

#endif /* CIRCLE_H_ */
