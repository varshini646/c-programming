#include<stdio.h>
int main()
{
	int dd,mm,yy,sum,lucky;
	printf("enter dd,mm,yy value");
	scanf("%d%d%d",&dd,&mm,&yy);
	sum=dd+mm+yy;
	lucky=sum%9;
	printf("your lucky=%d",lucky);
	return 0;
}
