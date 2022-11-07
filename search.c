#include<stdio.h>
#include<string.h>
 main()
{
	char n[3][10]={{"ram"},{"harshit"},{"rohit"}};
	char m[30];
	int i,b=0;
	gets(m);
	for(i=0;i<4;i++)
	printf("%s",n[2]);
	{
		if(strcmp(n[i],m)==0)
		b++;
	    else
		b=0;
	}
	if(b>0)
    	printf("available");
    else
     	printf("unavailable");
	
}
