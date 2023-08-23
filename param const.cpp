#include<iostream>
using namespace std;

//when we pass arguments to a constructor it is called parametrized constructor
class A
{
	private:
		int age;
	public:
		A(int x){  //parameterised construtor
			age=x;
			
		}
	 int getData(){
		return age;
	}
};

class B
{
	private:
		int a,b;
	public:
		B(int x,int y) : a(x), b(y) {  //parameterized constructor with initialization list
		}
		
		int show(){
			return a*b;
		}
};



int main(){
	A obj(50);
	B obj2(2,3);
	
	 cout << "your age is " <<obj.getData() <<" years" <<endl;
	 cout << "product is " <<obj2.show()<<endl;
	
	return 0;
}

