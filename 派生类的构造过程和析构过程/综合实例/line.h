#pragma once
#ifndef LINE_H

#endif // !LINE_H
#define LINE_H
#include "shape.h"
#include "point.h"
class line :public shape
{
private:
	point start;							//�߶ε���ʼ��
	point end;								//�߶ε��յ�
public:
	line(const point& s, const point& e, const char* c);
	void draw();							//����߶ε������Ϣ
};