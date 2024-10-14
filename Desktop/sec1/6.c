#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("Enter a character: ");
	c=getchar();
	if(isalpha(c))
	{
		printf("%c is an alphabet.",c);
	}
	else if(isdigit(c))
	{
		printf("%c is a digit.",c);
	}
	else
	{
		printf("%c is a special character",c);
	}
}
