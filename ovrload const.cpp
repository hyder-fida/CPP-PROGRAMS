#include<iostream>
using namespace std;

class person{
	
	string name;
	int age;
	float height;
	
  public:
  	person(string name_a="NULL",int age_a=0,float height_a=0.0f){
  		name=name_a;
  		age=age_a;
  		height=height_a;
	  }
	  
	person(const person &obj2 ){
		name=obj2.name;
		age=obj2.age;
		height=obj2.height;
	}
	
	void getData(){
		cout << endl << "Name " <<name;
		cout << endl << "Age " <<age;
		cout << endl << "Height " <<height;
	}
	
};

int main(){
	person obj1,obj2("fida",21,6.1),obj3(obj2);
	obj1.getData();//default constructor,automatically initialised
	obj2.getData();//parametrized constructor
	obj3.getData();//copy constructor
	
	return 0;
}
