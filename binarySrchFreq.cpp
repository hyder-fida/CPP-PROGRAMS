#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) 
{
	int s = 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	
	
	while(s <= n)
	{
		if(arr[mid] == key)
		  return mid;
		  
		  else if(arr[mid] < key)
		    s = mid + 1;
		    
		    else 
		      e = mid - 1;
		      
		    mid = s + (e-s)/2;  
	}
	return -1;
}


void frequencyOfEveryElement(int arr[], int n) {
	
	int i,j,k,count;
	
	for(i=0; i<n; i++) {
		int flag = 0;
		
		for(k=i; k>=0; k--) {
			
			if(arr[i] == arr[k]) {
			
			    flag = 1;
				   break;
            }
    	
    	else {
    		count = 1;
    		for(j=i+1; j<n; j++) {
			
			   if(arr[i] == arr[j]) 
			        count++;
				  
    	      }
    	      
    	cout << "frequency of " <<arr[i] <<" is " << count;
    	
		}
	}
	
	 
}

}








int main () {
	int arr[10];
	int n,i,key;
	
	cout << "Enter the size of array:" <<endl;
		cin >> n;
	
	cout << "Enter the elements of Array" <<endl;
	for(i=0; i<n; i++) {
		
		cin >> arr[i];
		
	}
	
//		cout << "Enter the key:" <<endl;
//		cin >> key;
		
		////cout << "the index of " <<key <<"is" << binarySearch( arr,  n,  key);
     
//     int result = binarySearch( arr,  n,  key);
//     
//     if(result)
//       cout << "the index of " <<key <<" is " << result;	
//    else
//       cout << "key not found ";
       
        frequencyOfEveryElement( arr, n);
	   
}
