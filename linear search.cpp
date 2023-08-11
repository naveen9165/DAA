#include<stdio.h>
int main()
{
	int a[100],x,i,n;
	printf("how many elements:");
	scanf("%d",&n);
	printf("enter elements in array:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter element to be search:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	if(a[i]==x)
	break;
	if(i<n)
	printf("element found at index %d",i);
	else
	printf("not found");
	return 0;
}
