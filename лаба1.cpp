#include<stdio.h>
#include<locale.h>
#include<cmath>

void main()
{
	setlocale(LC_ALL, "Rus");
	float r1, r2, d;
	int x1, y1, x2, y2;
	printf_s("Введите сначала координаты центра первой окружности: ");
	scanf_s("%i %i", &x1, &y1);
	printf_s("\nВведите его радиус: ");
	scanf_s("%f", &r1);
	printf_s("\nВведите координаты центра второй окружности: ");
	scanf_s("%i %i", &x2, &y2);
	printf_s("\nВведите его радиус: ");
	scanf_s("%f", &r2);
	double buf = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	d = sqrt(buf); //расстояние между центрами окружностей
	if (d == 0 && r1 == r2)
		printf("\nОкружности совпадают");
	if (d > (r1 + r2) || (r1 + d) < r2 || (r2 + d) < r1)
		printf("\nОкружности не имеют общих точек");
	if ((d == (r1 + r2)) || (abs(r1 - r2) == d))
		printf("\nОкружности имеют одну общую точку");
	if ((r1 + r2) > d && (r1 + d) > r2 && (r2 + d) > r1)
		printf("\nОкружности пересекаются в двух точках");
}
