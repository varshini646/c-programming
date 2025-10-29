#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b value");
	scanf("%d%d",&a,&b);
	printf("before swap enter a=%d,b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("aftre swap enter a=%d,b=%d",a,b);
	return 0;
}
