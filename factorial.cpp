#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf("enter the n value");
	scanf("%d",&n);
	for(i-1;i<=n;i++)
	{
	fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
