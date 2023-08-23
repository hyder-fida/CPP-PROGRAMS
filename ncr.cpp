#include<iostream>
using namespace std;

int factorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
	
}

int nCr(int n,int r){
	int num=factorial(n);
	int denom= factorial(r)*factorial(n-r);
	int result=num/denom;
	return result;
}
int main(){
	int n,r;
	cout <<"enter the values of n and r as per formula:"<<endl;
    cin>>n>>r;
    
	int value=nCr(n,r);
	cout <<value<<endl;
	
 	return 0;
}
