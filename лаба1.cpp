#include<stdio.h>
#include<locale.h>
#include<cmath>

void main()
{
	setlocale(LC_ALL, "Rus");
	float r1, r2, d;
	int x1, y1, x2, y2;
	printf_s("������� ������� ���������� ������ ������ ����������: ");
	scanf_s("%i %i", &x1, &y1);
	printf_s("\n������� ��� ������: ");
	scanf_s("%f", &r1);
	printf_s("\n������� ���������� ������ ������ ����������: ");
	scanf_s("%i %i", &x2, &y2);
	printf_s("\n������� ��� ������: ");
	scanf_s("%f", &r2);
	double buf = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	d = sqrt(buf); //���������� ����� �������� �����������
	if (d == 0 && r1 == r2)
		printf("\n���������� ���������");
	if (d > (r1 + r2) || (r1 + d) < r2 || (r2 + d) < r1)
		printf("\n���������� �� ����� ����� �����");
	if ((d == (r1 + r2)) || (abs(r1 - r2) == d))
		printf("\n���������� ����� ���� ����� �����");
	if ((r1 + r2) > d && (r1 + d) > r2 && (r2 + d) > r1)
		printf("\n���������� ������������ � ���� ������");
}