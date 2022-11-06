#include<iostream>
#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
main()
{
	int s,a[5][5],x,y,z,d; 
	cout<<" Enter the size of matrix = ";
	//s=getche();
	cin>>s;
	cout<<"\n Enter the Elements\n";
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			printf("\n a[%d][%d]= ",i,j);
			//a[i][j]=getche();
			cin>>a[i][j];	
		}
	}
	printf("\n\tMATRIX\n\n");
	for(int i=0;i<s;i++)
	{
		printf(" |\t");
		for(int j=0;j<s;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		printf("|");
		printf("\n");
	}
	system("CLS");
	switch(s)
	{
		case 2:
		{	
			d=a[1][1]*a[0][0]-a[1][0]*a[0][1];
			cout<<"\n Determinant="<<abs(d);
		}	
		case 3:
		{
			d=a[0][0]*a[2][2]*a[1][1]-a[0][0]*a[2][1]*a[1][2]-a[0][1]*a[1][0]*a[2][2]+a[0][1]*a[2][0]*a[1][2]+a[0][2]*a[1][0]*a[2][1]-a[0][2]*a[2][0]*a[1][1];
			cout<<"\n Determinant="<<abs(d);	
		}
		default:
		{
			printf("\n  For value of Determinant of size>=4 Buy Pro version of Determinant");	
		}
	}
}
