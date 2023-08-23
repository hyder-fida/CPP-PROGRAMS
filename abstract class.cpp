#include<iostream>
using namespace std;

// abstract class
class person{
	public:
		void virtual give()=0; // pure virtual function
		
};

class boy:public person{
	public:
		void give(){
			cout <<"brown bun"<<endl;
		}
};

class girl:public person{
	public:
		void give(){
			cout <<"pink bun"<<endl;
		}
};

int main(){
	
	boy b1;
	girl g1;
	
	person *ptr=NULL;
	
	ptr=&b1;
	ptr->give();
	
	ptr=&g1;
	ptr->give();
	
}
