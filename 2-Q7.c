#include<stdio.h>
int main(void)
{
	int amount1,amount2,amount3,amount4,amount5;
	printf("Enter a dollar amount:");
	scanf("%d",&amount1);
	amount2=amount1/20;
	amount3=(amount1-amount2*20)/10;
	amount4=(amount1-amount3*10-amount2*20)/5;
	amount5=(amount1-amount3*10-amount2*20-amount4*5)/1;
	printf("$20 bills:%d\n",amount2);
	printf("$10 bills:%d\n",amount3);
	printf("$5 bills:%d\n",amount4);
	printf("$1 bills:%d\n",amount5);
}
