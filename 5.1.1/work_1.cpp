#include <iostream>
using namespace std;

struct point {
	int m_x;
	int m_y;
	point(int x, int y) {
		m_x = x;
		m_y = y;
	}
};

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}

int main()
{
	int i;
	for ( i = 0; i < 5; i++) {
		point my_point(i, i*2);
		print_point(my_point);
	}

	return 0;
}


/*
1- опечатка в слове маин.
2- передаём инт, работаем с дабл - переводим всё в инт.
3- одна и таже ф определена 2 раза, 1 удаляю
4- m_y  не определена в структуре
5- ахааха лишняя ; - а я всё голову ломаю что за чудеса))
*/