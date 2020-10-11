#include<stdio.h>
int main(void)
{
	float x,y,z,one,two,three;
	printf("Enter amount of loan:");
	scanf("%f",&x);
	printf("Enter interest rate:");
	scanf("%f",&y);
	printf("Enter monthly payment:");
	scanf("%f",&z);
	
	one=(100+y/12)/100*x-z;
	two=(100+y/12)/100*one-z;
	three=(100+y/12)/100*two-z;
	
	printf("Balance remaining after first payment:%.2f\n",one);
	printf("Balance remaining after second payment:%.2f\n",two);
	printf("Balance remaining after third payment:%.2f\n",three);
}
