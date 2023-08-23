
//operator overloading:when we make operators(+,-,*,/) work for userdefined types like objects and structures
//this is known as operator overloading.
#include<iostream>
using namespace std;

class A{
	private:
		int weight;
	public:
		A(int x=0){
			weight =x;
			
		}
		A operator +A( w2)
		{
			A temp;
			temp.weight = weight + W2.weight;
			return temp;
		}
};

int main(){
	int a=63,b=74,c=0;
	c=a+b;
	A person1(63);
	A person2(74);
	
	A total;
	total = person1.addweight(person2);
	total = person2.addweight(person1);
	
	total=person1+person2;
	
}


