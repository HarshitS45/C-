#include<iostream>
#include"goto.h"
using namespace std;
#define cube(x) x*x*x;
main()
{
	gotoxy(31,13);
	int a=5,b;
    b=cube(a);
    cout<<b;

}
