//W.A.P that takes phone details as input and store them in object and use constructors:
//phone details:
//1.name
//2.ram
//3.processor
//4.battery

#include<iostream>
using namespace std;

class mobile{
	private:
		string name;
		int ram;
		string processor;
		int battery;
	public:
		 mobile(string name_a="null",int ram_a=0,string processor_a="null",int battery_a=0 ){
			name=name_a;
			ram=ram_a;
			processor=processor_a;
			battery=battery_a;
		}
		
		 mobile(const mobile &obj1){
			name=obj1.name;
			ram=obj1.ram;
			processor=obj1.processor;
			battery=obj1.battery;
		}
		
		void getData(){
			cout << "name:"<<name <<endl;
			
			cout << "ram:"<<ram<<endl;

			cout << "processor:"<<processor<<endl;

			cout << "battery:"<<battery<<endl;

		}
		
};

int main(){
	mobile obj,obj1("apple",8,"snapdragon",3300),obj2(obj1);
	obj.getData();
	obj1.getData();
	obj2.getData();
	return 0;
}
