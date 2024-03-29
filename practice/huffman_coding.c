#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int N1, N2, N3, N4, N5, N6;
	
	switch(n)
	{
		case 2:
			scanf("%d %d", &N1, &N2);
			break;
		case 3:
			scanf("%d %d %d", &N1, &N2, &N3);
			break;
		case 4:
			scanf("%d %d %d %d", &N1, &N2, &N3, &N4);
			break;
		case 5:
			scanf("%d %d %d %d %d", &N1, &N2, &N3, &N4, &N5);
			break;
		case 6:
			scanf("%d %d %d %d %d %d", &N1, &N2, &N3, &N4, &N5, &N6);
			break;
	}

	if(N1==1)
	{
		if(N2==0) printf("S0");
		else if(N2==1)
		{
			if(N3==0) printf("S2");
			else if(N3==1)
			{
				if(N4==0)
				{
					if(N5==0) printf("S6");
					else if(N5==1)
					{
						if(N6==0) printf("S7");
						else if(N6==1) printf("S8");
						else printf("S13");
					}
					else printf("S13");
				}
				else if(N4==1)
				{
					if(N5==0)
					{
						if(N6==0) printf("S9");
						else if(N6==1) printf("S10");
						else printf("S13");
					}
					else if(N5==1)
					{
						if(N6==0) printf("S11");
						else if(N6==1) printf("S12");
						else printf("S13");
					}
					else printf("S13");
				}
				else printf("S13");
			}
			else printf("S13");
		}
		else printf("S13");
	}
	else if(N1==0)
	{
		if(N2==0) printf("S1");
		else if(N2==1)
		{
			if(N3==0) printf("S3");
			else if(N3==1)
			{
				if(N4==1) printf("S5");
				else if(N4==0) printf("S4");
				else printf("S13");
			}
			else printf("S13");
		}
		else printf("S13");
	}
	else printf("S13");

	return 0;	
}
