#include<stdio.h>
#include<stdlib.h>
int main()
{
    int date, year, month,c,t,m,century,a=0;
    system("color A5");
    printf("This program is only valid for 20th and 21st century\n ");
    while(a==0)
    {
    system("color B5");
    printf("\nEnter date:");
    scanf("%d",&date);
    system("color 65");
     printf("\nEnter month number:");
    scanf("%d",&month);
    system("color 35");
     printf("\nEnter century:");
    scanf("%d",&century);
    system("color E5");
     printf("\nEnter year:"); //like In 1932 ,32 is year of the century 20th
    scanf("%d",&year);
    if(century==20)
    c=0;
    else
    c=6;
    if(month==1||month==10)
    m=1;
    else if(month==4||month==7)
    m=0;
    else if(month==5)
    m=2;
    else if(month==8)
    m=3;
    else if(month==2||month==3||month==11)
    m=4;
    else if(month==6)
    m=5;
    else 
    m=6;
    t=(date+m+c+year+(year/4))%7;
    if(date<32&&date>0&&month<13&&month>0&&year>-1&&year<100)
	{
		printf("\nThe day is ");
    	system("color F5");
   		if(t==1)
		printf("sunday");    
    	else if(t==2)
		printf("monday");
		else if(t==3)
		printf("tuesday");
	 	else if(t==4)
		printf("wednesday");
		else if(t==5)
		printf("thursday");
	 	else if(t==6)
		printf("friday");
	 	else 
		printf("saturday");
		printf(" corresponding to the date %d/%d/%d%d\n",date,month,century-1,year);
	}
	else
		printf("\nInvalid input data");
		printf("\nIf you want to calculate again press 0\n");
		scanf("%d",&a);
	}
}
