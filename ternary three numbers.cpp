#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter a and b and c value");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c)?a:c:(b>c)?b:c;
	printf("max of three numbers=%d",max);
	return 0;
}
