#include<stdio.h>
int main()
{
	int a,b,c;
	inp1: printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	if((a==b)||(a==c))
	{
		printf("The numbers cannot be equal.\nPlease enter the numbers again.\n");
		goto inp1;
	}
	else if(b==c)
	{
		printf("The numbers cannot be equal.\nPlease enter the numbers again.\n");
		goto inp1;
	}
	else
	{
		if((a>b)&&(a>c))
		{
			printf("%d is the largest.",a);
		}
		else if((b>a)&&(b>c))
		{
			printf("%d is the largest.",b);
		}
		else
		{
			printf("%d is the largest.",c);
		}
	}
}
