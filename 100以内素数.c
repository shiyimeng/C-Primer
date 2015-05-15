#include<stdio.h>
int main()
{
	int n; 
	for(n=2;n<100;n++)
	{
		int x;
	int numb=1;
		for(x=2;x<n;x++)
		{
			if(n%x==0)
			{
				numb=0;
				break;
			}
	if(numb==1)
		{
			printf("%d",n);
		}
	}
	printf("\n");
	return 0;
	}
}
