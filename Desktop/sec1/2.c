#include<stdio.h>
int main()
{
	int i;
	printf("50 odd numbers starting from 1.\n");
	for(i=1;i<=50;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
}
