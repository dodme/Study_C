#include <stdio.h>
#include <math.h>

// 두점 p1, p2 사이의 거리를 구하세요

void length(int a, int b)
{
	printf("두 점 사이의 거리 : %f",sqrt(pow(a, 2) + pow(b, 2)));
}

typedef struct
{
	int x;
	int y;
}Point;

void PointIn(Point* p, int x, int y)
{
	p->x = x;
	p->y = y;
}

int main()
{
	Point p1;
	Point p2;
	
	PointIn(&p1, 10, 20);
	PointIn(&p2, 0, 10);
	
	int a = p1.x - p2.x;
	int b = p1.y - p2.y;

	printf("p1 : %d, %d\n", p1.x, p1.y);
	printf("p2 : %d, %d\n", p2.x, p2.y);

	length(a, b);

	return 0;
}