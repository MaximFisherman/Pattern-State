// task on summer.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
/* 1) Первая задача на 5 собеседовании
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
/* 2) Вторая задача с собеседования
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
	int * const w = 0;//Константный указатель
	const int * w1 = 0;//Указатель на костанту
	const int * const w2 = 0; //Костантный указатель на константу
	system("pause");
    return 0;
}

