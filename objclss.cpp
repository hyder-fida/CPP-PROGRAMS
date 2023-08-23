#include<iostream>
using namespace std;
class base
{
	private:
		int x,y;
	public:
		void setData(int a,int b){
			x=a;
			y=b;
		}
		void showData(){
			cout <<"sum of "<<x <<" and "<<y <<" is "<<x+y<<endl;
		}
};
class derived:public base
{
	private:
		int z;
	public:
		void setData(int a){
			z=a;
			
		}
		void showData(){
			cout <<z;
		}
};
int main(){
	base obj1;
	derived obj2;
	obj1.setData(5,10);
	obj1.showData();
	obj2.setData(80);
	obj2.showData();
	return 0;
}
