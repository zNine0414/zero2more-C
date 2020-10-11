#include<stdio.h>
int main(void)
{
	float money,tax;
	
	printf("Enter an amout:");
	scanf("%f",&money);
	tax=money*1.05;
	printf("With tax added:$%f\n",tax);
	
} 
