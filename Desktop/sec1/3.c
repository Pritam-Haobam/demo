#include<stdio.h>
int main()
{
	int i,fact=1,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("The factorial of %d is %d",n,fact);
}
