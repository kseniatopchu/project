#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#define n 5
void fill(int*, int);
void main()
{
	setlocale(LC_ALL, "rus");
	int a[n], i;
	float s = 0;
	fill(a, n);
	for (i = 0;i < n;i++)
	{
		s += a[i];
		printf("%i \t", a[i]);
	}
	printf("\nсреднее арифметическое: %.2f", s / n);
}
void fill(int* ptr, int num)
{
	srand(time(NULL));
	for (int i = 0;i < num;i++)
		ptr[i] = rand() % 10;
}
