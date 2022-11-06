#include<stdio.h>
main()
{
	float principle_amount;
	float rate;
	float time;
	float simple_interest;
	printf("Enter principle amount:");
	scanf("%f",&principle_amount);
	printf("\n Enter rate:");
	scanf("%f",&rate);
	printf("\n Enter time:");
	scanf("%f",&time);
	simple_interest=(principle_amount*rate*time)/100;  //formula to find simple interest
	printf("\n Simple interest =%.2f",simple_interest);
	
}
	
