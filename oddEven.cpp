#include<iostream>
using namespace std;

bool isEven(int a){
	//odd
	if(a&1){
		return 0;
	
	}
	else{ //even
		return 1;
	}
}
int main(){
	int num;
	cout << "Enter any number"<< endl;
	cin>>num;
		if(isEven(num)){
			cout << "number is even "<< endl;
			
		}
		else{
			cout << "number is odd"<< endl;
		}
		
		return 0;
}
