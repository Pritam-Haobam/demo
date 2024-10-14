#include<stdio.h>
int main()
{
	int i,sum=0,a=0,b=1;
	printf("First 10 elements of the Fibonacci series.\n %d %d ",a,b);
	for(i=1;i<=8;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d ",sum);
	}
}
