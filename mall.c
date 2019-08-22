#include<stdio.h>
void main(){
	int a[100],k,n,min,temp,i,j;
	printf("enter no of elemenst");
	scanf("%d",&n);
	printf("enter  elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter k");
	scanf("%d",&k);
	for(i=0;i<k;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])
				min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("required number is %d",a[k-1]);
}