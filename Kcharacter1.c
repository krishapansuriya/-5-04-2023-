#include<stdio.h>
main()
{
	char chr;
	printf("Enter char=");
	scanf("%c",&chr);
	if((chr>='a' && chr<='z')||(chr>='A' && chr<='Z'))
	{
	    printf("char %c is aalphabet",chr);
	}
	else if(chr>='0' && chr<'9')
	{
	    printf("char %c is digit",chr);
	}
	else 
	{
	    printf("char %c is special character",chr);
	}                                             
}
