#include<iostream>
using namespace std;

findArrayIntersection(int arr1[], int n, int arr2[], int m)
{
	int i = 0, j = 0;
    int ans = 0;
    
    while(i<n && j<m) {
    
    if(arr1[i] == arr2[j])
    {
    	ans = arr1[i];
          i++;
          j++;
    }
    
    else if (arr1[i] < arr2[j]) {
    	
  		i++;
  		
    }
    
    else
    
    {
    	
    	j++;
    	
    }
    
    
    }
    
    return ans;
    
}

int main() {
	
	int n=5;
	int m=5;
	
	int	arr1[5] = {2,3,5,9,8};
	int	arr2[5] = {4,6,7,9,20};
	
	cout << "array intersection "<<findArrayIntersection(arr1, n, arr2, m);//9
	
	
}
