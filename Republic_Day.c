#include<stdio.h>
#include<string.h>
int i,j,k;
square(char message[30],char symbol)
{
	int length=strlen(message);
	for(i=1;i<=length;i++)
	{
	    if(i==(length/2)+1)
			{
		    	for(k=0;k<=(length/4)+1;k++)
				printf(" ");
				printf("%s",message);
			}
		else
			{
			for(j=1;j<=length;j++)
			 	printf("%c ",symbol);
			}
			printf("\n");
    }
}
rectangle(char message[30],char symbol)
{
	int length=strlen(message);
	for( i=1;i<=length/2;i++)
			{
			    if(i==(length/4)+1)
				{
					for( k=0;k<=(length/4)+1;k++)
					printf(" ");
					printf("%s",message);
				}
				else
				{
					for( j=1;j<=length;j++)
				 		printf("%c ",symbol);
		 		}
		 		printf("\n");
			}	
}
triangle(char message[30],char symbol)
{
	int length=strlen(message);	
	for(i=1;i<=length;i++)
	{
	    if(i==(length/2)+1)
		{
			for(k=1;k<=length/2;k++)
			printf(" ");
			printf("%s",message);
		}
		else
		{
			for(k=length;k>i;k--)
				printf(" ");
			for(j=1;j<=i;j++)
		 		printf("%c ",symbol);
		}
	 	printf("\n");
	}		
}
main()
{
	int choice;
	char message[30],symbol;
	printf("Select any of the following pattern\n\n1.Square\n\n2.Rectangle\n\n3.Triangle\n\nPlease enter your choice and enter the message\n");
	scanf("\n%d ",&choice);
	gets(message);
	printf("\nPlease enter symbol to fill square:");
	scanf("%c",&symbol);
	switch(choice)
	{
		case 1:
	    	square(message,symbol);
			break;
		case 2:
			rectangle(message,symbol);
			break;
		case 3:
			triangle(message,symbol);
			break;
		default:
			printf("Invalid Input");
			break;	
	}
}
/* Output

Select any of the following pattern

1.Square

2.Rectangle

3.Triangle

Please enter your choice and enter the message
1
HAPPY REPUBLIC DAY

Please enter symbol to fill square:!
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
      HAPPY REPUBLIC DAY
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
			
			or
			
Select any of the following pattern

1.Square

2.Rectangle

3.Triangle

Please enter your choice and enter the message
2
HAPPY REPUBLIC DAY

Please enter symbol to fill square:@
@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @
@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @
@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @
@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @
      HAPPY REPUBLIC DAY
@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @
@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @
@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @
@ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @

  			 or
  			 
Select any of the following pattern

1.Square

2.Rectangle

3.Triangle

Please enter your choice and enter the message
3
HAPPY REPUBLIC DAY

Please enter symbol to fill square:^
                 ^
                ^ ^
               ^ ^ ^
              ^ ^ ^ ^
             ^ ^ ^ ^ ^
            ^ ^ ^ ^ ^ ^
           ^ ^ ^ ^ ^ ^ ^
          ^ ^ ^ ^ ^ ^ ^ ^
         ^ ^ ^ ^ ^ ^ ^ ^ ^
         HAPPY REPUBLIC DAY
       ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
      ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
     ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
    ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
   ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
  ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
 ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^

*/			 	
