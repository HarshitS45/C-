
#include<stdio.h>
int main()
{
	char a,b,c,d;
	printf("Welcome to the Swiggy \n\nFrom which Restrurent you want to order\n\n1.Avantika\n2.Danapani\n3.Madhurvatika\n");
	scanf("%c",&a);
	switch(a)
	{
	case '1':
		printf("Welcome to the Avantika\nWhat do you want to order\n1.Dosa  5$\n2.Burger  3$\n3.Pastry  3$\n");
		scanf(" %c",&b);
		switch(b)
		{
		case '1':
			printf("Please have your Dosa");
			break;
		case '2':
			printf("Please have your Burger");
			break;
		case '3':
			printf("Please have your Pastry");
			break;
		default:
			printf("Please enter correct input");
			break;
		}
		break;
	case '2':
		printf("Welcome to the Danapani\nWhat do you want to order\n1.Paavbhajhi  3$\n2.Pizza  6$\n3.Vegroll  2$\n");
		scanf(" %c",&c);
		switch(c)
		{
		case '1':
			printf("Please have your Paavbhajhi");
			break;
		case '2':
			printf("Please have your Pizza");
			break;
		case '3':
			printf("Please have your Vegroll");
			break;
		default:
			printf("Please enter correct input");
			break;
		}
		break;
	case '3':
		printf("Welcome to the Madhuvan\nWhat do you want to order\n1.Fried Rice  4$\n2.Fried Maggi  5$\n3.Momos 3$\n");
		scanf(" %c",&d);
		switch(d)
		{
		case '1':
		printf("Please have your Fried Rice");
		break;
		case '2':
		printf("Please have your Fried Maggi");
		break;
		case '3':
		printf("Please have your Momos");
		break;
		default:
		printf("Please enter correct input");
		}
		break;
	default:
		printf("Please enter correct input");
}}
