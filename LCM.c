#include<stdio.h>
main()
{
	int a,b,x,y,t,HCF,LCM;
	printf("Enter\n");
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	HCF=a;
	LCM=(x*y)/HCF;
	printf("HCF=%d",HCF);
	printf("LCM=%d",LCM);
	
}
