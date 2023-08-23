#include<iostream>
using namespace std;

//using virtual functions

class person{
	public:
		virtual void give(){ 
			cout << "bun";
			
		}
		
};
	
class girl: public person{
	public:
		void give(){
			cout << "pink bun"<<endl;
		}
};

class boy: public person{
	public:
		void give(){
			cout << "brown bun"<<endl;
		}
		
};

int main(){
	
	girl g1;
	boy b1;
	
	person *ptr =NULL;
	
	ptr=&g1;
	ptr->give();
	
	ptr=&b1;
	ptr->give();
		
}

