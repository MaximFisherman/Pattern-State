// task on summer.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
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
};
int main()
{
	K(12);
	K(12.3);
	K(15);
	system("pause");
    return 0;
}

