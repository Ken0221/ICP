#include<stdio.h>

int main()
{
	float a1, b1, c1;
	float a2, b2, c2;
	float x, y;

	scanf("%f %f %f", &a1, &b1, &c1);
	scanf("%f %f %f", &a2, &b2, &c2);
	
	x=(c1*b2-b1*c2)/(a1*b2-b1*a2);
	y=(a1*c2-c1*a2)/(a1*b2-b1*a2);

	printf("%f %f", x, y);

	return 0;
}
