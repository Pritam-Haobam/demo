#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2,d;
	printf("Enter the coefficient of x^2: ");
	scanf("%d",&a);
	printf("Enter the coefficient of x: ");
	scanf("%d",&b);
	printf("Enter the value of the constant: ");
	scanf("%d",&c);
	d=sqrt((b*b)-4*a*c);
	if(d>=0)
	{
		printf("The roots are real.\n");
		r1=(-b+d)/(2*a);
		r2=(-b-d)/(2*a);
		printf("r1 = %.2f\n",r1);
		printf("r2 = %.2f",r2);
	}
	else
	{
		printf("The roots are imaginary.");
	}
}
