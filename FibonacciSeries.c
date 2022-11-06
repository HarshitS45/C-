#include<stdio.h>
main()
{
	int a=0,b=1,number;
	printf("Enter the number upto which you want the Fibonacci Series:");
	scanf("%d",&number);
	while(b<number)
	{
		printf("%d %d ",a,b);
		a=a+b;
		b=a+b;
	}
}
/* Output
Enter the number upto which you want the Fibonacci Series:1000
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610
*/
