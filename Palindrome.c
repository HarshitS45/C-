#include<stdio.h>
main()
{
	int number,a,rev=0;
	printf("\nEnter the number:");
	scanf("%d",&number);
	a=number;
	while(number>=1)
	{
		rev=rev*10+(number%10);
		number=number/10;
	}
    printf("Reverse of %d is %d",a,rev);
}
