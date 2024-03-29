#include<stdio.h>

int main()
{
	int d, m;
	int p, c;
	int n1000, n500, n100, n50, n10, n5, n1;

	scanf("%d %d", &d, &m);

	switch(d)
	{
		case 1:
			p=49;
			break;
		case 2:
			p=485;
			break;
		case 3:
			p=241;
			break;
		case 4:
			p=167;
			break;
		case 5:
			p=713;
			break;
	}

	if(m>=p)
	{
		c=m-p;

		n1000=c/1000;
		c=c-n1000*1000;
		
		n500=c/500;
		c=c-n500*500;

		n100=c/100;
		c=c-n100*100;
		
		n50=c/50;
		c=c-n50*50;
		
		n10=c/10;
		c=c-n10*10;
		
		n5=c/5;
		c=c-n5*5;
		
		n1=c/1;

		printf("$1000x%d\n", n1000);
		printf("$500x%d\n", n500);
		printf("$100x%d\n", n100);
		printf("$50x%d\n", n50);
		printf("$10x%d\n", n10);
		printf("$5x%d\n", n5);
		printf("$1x%d", n1);
	}
	else
	{
		c=p-m;
		
		n1000=c/1000;
		c=c-n1000*1000;
		
		n500=c/500;
		c=c-n500*500;

		n100=c/100;
		c=c-n100*100;
		
		n50=c/50;
		c=c-n50*50;
		
		n10=c/10;
		c=c-n10*10;
		
		n5=c/5;
		c=c-n5*5;
		
		n1=c/1;

		printf("That's not enough. You still need to pay:\n");
		printf("$1000x%d\n", n1000);
		printf("$500x%d\n", n500);
		printf("$100x%d\n", n100);
		printf("$50x%d\n", n50);
		printf("$10x%d\n", n10);
		printf("$5x%d\n", n5);
		printf("$1x%d", n1);
	}
	return 0;
}
