#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a and b and c and d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf("a is big");
	else if(b>c&&b>d)
	printf("b is big");
	else if(c>d)
	printf("c is big");
	else
	printf("d is big");
	return 0;
}
