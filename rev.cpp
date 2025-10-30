#include<stdio.h>
int main()
{
	int n,rev=0,d,temp;
	printf("enter any value");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	if(rev==temp)
	printf("it is a polindrone");
	else
	printf("it is not a polindrone");
	return 0;
}
