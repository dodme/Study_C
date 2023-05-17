#include <stdio.h>
#include <math.h>

typedef struct
{
	int x;
	int y;
}Point;

void SetPoint(Point* point, int x, int y)
{
	point->x = x;
	point->y = y;
}

int main()
{
	Point p1;
	Point p2;
	
	SetPoint(&p1, 10, 20);
	SetPoint(&p2, 20, 30);

	printf("두 점과의 거리는 %lf입니다.\n", 
		sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2)));


	return 0;
}