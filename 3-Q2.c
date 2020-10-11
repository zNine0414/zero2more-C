#include<stdio.h>
int main(void)
{
	int day,month,year,number;
	float price;
	
	printf("Enter item number:");
	scanf("%d",&number);
	printf("Enter unit price:");
	scanf("%f",&price);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&month,&day,&year);
	
	printf("Item       Unit        Purchase\n"
	       "           Price       Date\n"
	       "%-d        $%7.2f    %-2.2d/%.2d/%d\n",number,price,month,day,year);
	       
	return 0;
}
