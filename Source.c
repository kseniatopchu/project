#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#define n 5
void main()
{
	int a[n], i;
	float s = 0;
	srand(time(NULL));
	for (i = 0;i < n;i++)
	{
		a[i] = rand() % 11;
		s += a[i];
		printf("%i \t", a[i]);
	}
	printf("\nсреднее арифметическое: %.2f", s / n);
}