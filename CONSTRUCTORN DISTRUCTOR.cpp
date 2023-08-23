#include<iostream>
using namespace std;

class test
{	
	public:
		test() //constructor 
		{	
		cout << "object created "<<endl;
		}
		~test() //destructor
		{	
		cout << "object destroyed";
		}
};

int main(){
	
	test obj;
	return 0;
	
}
