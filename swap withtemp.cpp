#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter a,b value");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swap a=%d,b=%d",a,b);
	return 0;
}
