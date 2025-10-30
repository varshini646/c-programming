#include<stdio.h>
int main()
{
	int p,q,r,s,x=10;
	p=x++;
	printf("p=%d",p);
	q=x--;
	printf("q=%d",q);
	r=++x;
	printf("r=%d",r);
	s=--x;
	printf("s=%d",s);
	printf("x=%d",x);
	return 0;
}
