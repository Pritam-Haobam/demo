#include<stdio.h>
int main()
{
	int BP;
	float DA,TA,PF,Net;
	char x;
	printf("Enter the Basic Pay of the employee: ");
	scanf("%d",&BP);
	printf("Enter the Dearness Allowance of the employee: ");
	scanf("%f",&DA);
	DA=BP*DA/100;
	printf("Enter the Travel Allowance of the employee: ");
	scanf("%f",&TA);
	TA=BP*TA/100;
	printf("Enter the Provident Fund of the employee: ");
	scanf("%f",&PF);
	PF=BP*PF/100;
	Net=DA+TA+BP-PF;
	printf("%.2f is the net salary of the employee",Net);
}
