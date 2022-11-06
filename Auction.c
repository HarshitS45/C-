#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("Elements of array after sorting to ascending order are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(int i=n-1;i<n;i++)
	{
		printf("Budget left out which highest bidder is %d\n",a[i]-a[i-1]);
	}
}
