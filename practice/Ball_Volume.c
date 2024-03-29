#include<stdio.h>

int main()
{
	float w,l,r;
	float v,h;
	scanf("%f %f %f", &w, &l, &r);

	v=3.14*r*r*r*4/3;
	h=v/(w*l);

	printf("%f %f", v, h);

}
