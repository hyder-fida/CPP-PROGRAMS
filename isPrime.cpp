#include<iostream>
using namespace std;

int isPrime(int n){
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			return 0;
		
		}
	}
	return 1;
	
}
int main(){
	int num;
	cout <<"Enter any number:"<<endl;
	cin>>num;
	if(isPrime(num))
		cout<<"this is a prime number"<<endl;
	else
		cout<<"this is not a prime number"<<endl;

}
