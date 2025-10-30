#include<stdio.h>
int main()
{
	int X=5,Y=2;
	float c,d;
	c=X/Y;
	printf("IMPLICIT VALUE=%f",c);
	d=(float)X/Y;
	printf("EXPLICIT VALUE=%f",d);
	return 0;
}
