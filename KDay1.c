#include<stdio.h>
main()
{
	char f;
	printf("press S to Sunday");
	printf("\npress M to Monday");
	printf("\npress T to Tuesday");
	printf("\npress W to Wednesday");
	printf("\npress t to Thursday");
	printf("\npress F to Friday");
	printf("\npress s to Saturday");
	printf("\n\nEnter your choice:-");
	scanf("%c",&f);
	switch(f)
	{
		case 'S':
			printf("Sunday");
			break;
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thursday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 's':
			printf("Saturday");
			break;
		default:
			printf("plz enter valid choice!");
	}
}
	

