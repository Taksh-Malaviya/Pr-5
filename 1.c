#include<stdio.h>

void main(){
	
	int a[100];
	int i,n;
	
	
	printf("Entr array size ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter count [%d]");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		
		if(a[i]<0){
			printf("%d",a[i]);
			
		}
		
	}
			
	
	
			
	
	
	
	
	
}
