#include<stdio.h>
#include<string.h>
int main()
{
	char i,s[20];
	int l;
	printf("enter string name");
	gets(s);
	for (i=0;s[i]!=0;i++);
	l=i;
	printf("length of string=%d",l);
	return 0;
}
