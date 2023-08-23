#include<iostream>
using namespace std;

//copy constructor is used to copy or initialize the value of one oject into another object
class person
{	public:
		string name;
		int age;
		
		//constructor
		person(string n,int x){
			name=n;
			age=x;
		}
		//copy constructor
	  person(const person &p){
			name=p.name;
	  	    age=p.age;
	  	cout << "copy constructor called" <<endl;
	  	
	  }
	  //display method
	  void show(){
	  	cout <<"NAME:" << name << endl;
	  	cout <<"AGE:" << age << endl;
	  	
	  }
};


class car
{
	public:
		string name;
		int cost;
		
	car(string n,int x){
		name=n;
		cost=x;
	}
	car(const car &c){
		name=c.name;
		cost=c.cost;
		cout <<"copy constructor called"<<endl;
	}
	
	void display(){
		cout <<"name of car is: "<<name << endl;
		cout <<"cost of car is: "<<cost << endl;
	}
};


class student
{
	public:
		string name;
		string course;
		int rollno;
		
	student(string n,string m,int x){
		name=n;
		course=m;
		rollno=x;
	}
	student( const student &s){
		name=s.name;
		course=s.course;
		rollno=s.rollno;
	}
	void disp(){
		cout <<"name of student is: "<<name << endl;
		cout <<"name of class is: "<<course << endl;
		cout <<"roll number of student is: "<<rollno << endl;
	}
	
		
};

int main(){
	// for class person
	person jhon("jhon",50);
	jhon.show();
	person jane=jhon;
	jane.show();
	
	//for class car
	car Jag("jaguar",5000000);
	Jag.display();
	car bmw=Jag;
	bmw.display();
	
	// for class student
	student s1("hyder","mca",22);
	s1.disp();
	student s2=s1;
	s2.disp();
}


