// task on summer.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
/* 1) ������ ������ �� 5 �������������
int x = 0;
int y = 0;

template<class T>
void* K(T t) {
	std::cout << "x=" << x << "y=" << y << std::endl;
	if (x++&&++y) {
		y += 2;
	}
	std::cout << "x=" << x << "y=" << y << std::endl;
	int l = x + y;
	std::cout << l<< " " ;
	return 0;
};*/
/* 2) ������ ������ � �������������
static int count = 0;
void D() {
	static int x = count;
	++count;
	std::cout << count << std::endl;
};
*/
int main()
{
	/* 
	1) 
	K(12);
	K(12.3);
	K(15);
	*/
	/*
	2)
	D();
	D();
	D();
	*/
	int * const w = 0;//����������� ���������
	const int * w1 = 0;//��������� �� ��������
	const int * const w2 = 0; //���������� ��������� �� ���������
	system("pause");
    return 0;
}

