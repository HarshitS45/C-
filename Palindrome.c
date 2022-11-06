#include<stdio.h>
main()
{
	int again=0;
	while(again==0)
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
	if(a==rev)
    	printf("\nGiven number is palindrome\n\nReverse of the %d is %d",a,rev);
    else
    	printf("\nGiven number is not palindrome\n\nReverse of the %d is %d",a,rev);
    printf("\n\nIf you want to find the reverse of another number press 0 otherwise press any digit:");
    scanf("%d",&again);
    }
}
/* Output
Enter the number:12345

Given number is not palindrome

Reverse of the 12345 is 54321

If you want to find the reverse of another number press 0 otherwise press any digit:0

Enter the number:15051

Given number is palindrome

Reverse of the 15051 is 15051

If you want to find the reverse of another number press 0 otherwise press any digit:1

*/
