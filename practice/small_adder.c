#include<stdio.h>

int main()
{
	int a, b, sum, car;
	
	sum=0;
	car=0;
	scanf("%d %d", &a, &b);

	if(a+b==2)
	{
		car=car+1;		
	}
	if(a+b==1)
	{
		sum=sum+1;
	}

	printf("%d %d", car, sum);

	return 0;
}
