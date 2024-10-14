#include<stdio.h>
int main()
{
	int r;
	float area,peri;
	printf("Enter the radius of the circle: ");
	scanf("%d",&r);
	float pi=3.14159;
	area=pi*r*r;
	peri=2*pi*r;
	printf("Area of the circle with radius %d is %.2f\n",r,area);
	printf("Perimeter of the circle with radius %d is %.2f",r,peri);
}
