#include<stdio.h>

int main()
{
	int a, b, q, r, k;
	scanf("%d %d", &a, &b);

	q=a/b;
	r=a%b;

	if(r%2==0)
	{
		k=1;
	}
	else
	{
		k=0;
	}

	printf("%d %d %d", q, r, k);
	return 0;
}
