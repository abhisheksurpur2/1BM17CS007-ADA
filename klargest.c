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
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d\n",a[i]);
	}
}