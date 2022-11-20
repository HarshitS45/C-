/* 
 * @Author - Harshit Srivastava
 * Problem : Check whether given year is leap year or not.
 */

#include<stdio.h>
main()
{
	int year,again=0;
	while(again<1)
	{
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0)
		{
		if(year%100==0)
		{
			if(year%400==0)
			printf("\n%d is leap year\n",year);
			else
			printf("\n%d is not leap year\n",year);
		}
		else
		printf("\n%d is leap year\n",year);
		}
		
	else
	printf("\n%d is not leap year\n",year);
	printf("\nIf you want to enter again press 0\n");
	scanf("\n%d",&again);
	}
}
