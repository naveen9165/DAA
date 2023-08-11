#include<stdio.h>
int main(){
	int a,i,r,lis[20],j,t,min=0,max,mid,f,pos=0,q=0;
	printf("Enter the range:");
	scanf("%d",&a);
	printf("Enter the numbers:\n");
	for(i=0;i<a;i++){
		printf("Enter the %d element:",i+1);
		scanf("%d",&lis[i]);
	}
	for(i=0;i<a;i++){
		for(j=i;j<a;j++){
			if(lis[i]>lis[j]){
				t=lis[i];
				lis[i]=lis[j];
				lis[j]=t;
			}
		}
	}
printf("The sorted list is:");
for(i=0;i<a;i++){
	printf(" %d ",lis[i]);
}
max=a;
printf("\nEnter the element to find:");
scanf("%d",&f);
while(pos==0 && q<=a){
	mid=(min+max)/2;
	if(lis[mid]==f){
		pos=mid+1;
	}
	else if(lis[min]<f){
		min=mid+1;
	}
	else{
		max=mid-1;
	}
	q++;
}
if(pos!=0){
printf("The position of given element %d is:%d",f,pos);}
else{
	printf("U given wrong input");
}
}
