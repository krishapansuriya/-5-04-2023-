#include<stdio.h>
main()
{
	int a=500,b=400,c=3000,d=200;
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is maximum");
			}
			else
			{
				printf("D is maximum");
			}
		}
	}
	else
	{
		if(b>c)
	      {
		      printf("B is maximum");
		}
		else
		{
			printf("C is maximum");
	      }
	}     
}
