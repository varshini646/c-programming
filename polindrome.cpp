#include<stdio.h>
int main()
{
	int n,d,rev=0,temp;
	printf("enter n value");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
       	d=n%10;
		rev=10*rev+d;
		n=n/10;
	}
	if(temp==rev)
	printf("it is a polindrome");
	else
	printf("it is not a polindrome");
	return 0;
}
