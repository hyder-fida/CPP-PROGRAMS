#include<iostream>
using namespace std;

class house
{
	private:
		int length,breadth;
	public:
		void setData(int x,int y){
			length=x;
			breadth=y;
			
		}
		void showData(){
			cout <<"area of house is " << length*breadth <<"sqft" <<endl;
		}
};

int main(){
	house gini; //object 1
	house jimy; //object 2
	gini.setData(5,4);
	gini.showData();
	
	jimy.setData(7,4);
	jimy.showData();
	return 0;
}
