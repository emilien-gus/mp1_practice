#include <stdio.h>;
#include<locale.h>;
#include<math.h>;

void main()
{
	setlocale(LC_ALL, "Rus");
	float r1, r2, d;
	int x1, y1, x2, y2;
	scanf("%i %i %f %i %i %f", &x1, &y1, &r1, &x2, &y2, &r2);
	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); //расстояние между центрами окружностей
	if (d == 0 && r1 == r2)
		printf("Окружности совпадают");
	if (d > (r1 + r2) || r1 + d < r2 || r2 + d < r1)
		printf("Окружности не имеют общих точек");
	if ((d == (r1 + r2)) || (abs(r1 - r2) == d))
		printf("Окружности имеют одну общую точку");
	if ((r1 + r2) > d && (r1 + d) > r2 && (r2 + d) > r1)
		printf("Окружности пересекаются в двух точках");
}