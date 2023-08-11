#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	printf("enter the string:");
	scanf("%s",str);
	printf("after reverse string;%s",strrev(str));
	return 0;
}
