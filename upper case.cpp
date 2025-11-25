#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	printf("enter s1 name");
	gets(s1);
	strupr (s1);
	printf("upper case string=%s",s1);
	return 0;
}
