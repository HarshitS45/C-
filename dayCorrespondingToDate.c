#include<stdio.h>
#include<stdlib.h>
int main()
{
    int date, year, month,c,t,m,century;
    system("color A5");
    printf("This program is only valid for 20th and 21st century\n ");
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

    system("color F5");
        if(t==1)
        printf("\nSunday");
    else if(t==2)
        printf("\nMonday");
         else if(t==3)
        printf("\nTuesday");
         else if(t==4)
        printf("\nWednesday");
         else if(t==5)
        printf("\nThursday");
         else if(t==6)
        printf("\nFriday");
         else
        printf("\nSaturday");
}
              
