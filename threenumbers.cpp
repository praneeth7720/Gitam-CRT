#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && b>c)
	printf("%d is greater",a);
	else if(b>a && b>c)
	printf("%d is greater",b);
	else
	printf("%d is greater",c);
	return 0;
}
