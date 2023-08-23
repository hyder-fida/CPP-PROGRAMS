#include<iostream>
using namespace std;

class rectangle{
	
   public:
		int length;
		int breadth;
		void area(){
			cout <<"area of rectangle is: " <<length*breadth<<endl;
		}
		
};

class cuboid:public rectangle
{
  public:
		int height;
		void volume(){
			
			cout <<"volume of cuboid is: "<<height*length*breadth<<endl;
		}
		
};

int main(){
	
	rectangle r;
	cuboid c;
	
	c.height=30;
	r.length=10;
	r.breadth=20;
	
	r.area();
	c.volume();
	
}
