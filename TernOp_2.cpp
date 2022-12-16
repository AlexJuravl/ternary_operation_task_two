#include <stdio.h>
#include <math.h>

double pifagor(int x, int y);

void output(int a, int b);

void main()
{
	int r;
	int ax;
	int ay;
	int bx;
	int by;
	int paramA = 0;
	int paramB = 0;

	printf("In the Cartesian coordinate system, a circle of radius R1 centered at the origin and two points A(Ax, Ay) and B(Bx, By) are given. Determine whether points A and B lie inside the circle, lie on it, are outside it.\n");
	printf("Enter the radius of cercle: ");
	scanf("%d", &r);
	printf("Enter coordinats of A: ");
	scanf("%d %d", &ax, &ay);
	printf("Enter coordinats of B: ");
	scanf("%d %d", &bx, &by);

	paramA = (pifagor(ax,ay) < r) ? 0 : paramA;
	paramA = (pifagor(ax, ay) == r) ? 1 : paramA;
	paramA = (pifagor(ax, ay) > r) ? 2 : paramA;
	paramB = (pifagor(bx, by) < r) ? 0 : paramB;
	paramB = (pifagor(bx, by) == r) ? 1 : paramB;
	paramB = (pifagor(bx, by) > r) ? 2 : paramB;

	printf("A - %d B - %d", paramA, paramB);
}

double pifagor(int x, int y)
{
	return pow((x*x + y*y),0.5);
}

void output(int a, int b)
{
	int r;
	r = (a)
}