#include<stdio.h>
//program67:to search an element in an array of n elements using linear search using functions:

int lsrch(int arr[],int size,int key){
	
	int i,k,flag=0;
		
	for(i=0;i<size;i++){
		
		if(arr[i]==key)	
			
			k=arr[i];
			flag=1;
			break;		
		}
	
	if(flag==1)
		return k;
	else
	return 0;
	
	
}

int main(){
	
	int i,key,n,k,arr[100];
	
	printf("enter the size of array:");
		scanf("%d",&n);
	printf("enter the element to search:\n);
		scanf("%d",&key);
		
		printf("enter the elements of array:\n");
			for(i=0;i<n;i++){
				scanf("%d",&arr[i]);
			}
			
			k=lsrch(arr,n,key);
			if(lsrch())
			  printf("key found at index : %d",k);
			  
			else{
				 printf("key not found ");
			}
			
}
