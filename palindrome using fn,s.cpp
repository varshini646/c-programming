#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,j,l,flag=0;
	printf("enter string name");
	scanf("%s",s);
	l=strlen (s);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
	return 0;
}
