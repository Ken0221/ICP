#include<stdio.h>

int main()
{
	int c, p, s;
	int n1000,n500, n100, n50, n10, n1;

	scanf("%d %d", &c, &p);

	s=c-p;

	n1000=s/1000;
	s=s-n1000*1000;

	n500=s/500;
	s=s-n500*500;

	n100=s/100;
	s=s-n100*100;

	n50=s/50;
	s=s-n50*50;

	n10=s/10;
	s=s-n10*10;

	n1=s/1;

	printf("$1000x%d\n",n1000);	
	printf("$500x%d\n",n500);
	printf("$100x%d\n",n100);
	printf("$50x%d\n",n50);
	printf("$10x%d\n",n10);
	printf("$1x%d",n1);

	return 0;
}
