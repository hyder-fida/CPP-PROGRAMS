#include<iostream>
using namespace std;

class A 
{
	public:
	virtual	void disp()
		{
			cout << "base disp";
		}
		
	
		void show()
		{
			cout << "base show";
		}
};

class B : public A 
{
	public:
		void disp()
		{
			cout << "derived disp";
		}
		
		
		void show()
		{
			cout << "derived show";
		}
};

int main (){
	
	A a1;
	B b1;
	A *p;
//	a1.show();
	cout <<endl;
//	a1.disp();
	//p = &a1;
   cout <<endl;
	 
	p = &b1;
	p->show(); //base disp
	cout <<endl;
	p->disp(); //derived show
	
	
}
