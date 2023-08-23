#include<iostream>
using namespace std;

//encapsulation is used in wrapping up the data and functions into a single unit,data of class isnot
//accessible to outside world only those functions access the data which are wrapped up in the class.

class A{
	private:
		int a ,b;
	public:
		void show(){
			
			cout << "enter values:";
			cin >> a >> b;
			
		}
		
		void sum(){
			cout << "sum of "<< a <<" and " << b <<" is "<< a+b <<endl;
			cout << "product of "<< a <<" and " << b <<" is "<< a*b <<endl;
		}
		
};

int main(){
	A obj;
	obj.show();
	obj.sum();
	
	return 0;
}


