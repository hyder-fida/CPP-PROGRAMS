#include<iostream>
using namespace std;


class test
{
	private:
		int a;int b;
	public:
		sum()
		{
			a=10;
			cout <<a;
		}
    //	~sum(){
		//cout <<"object destroyed";
	//}
	
	add(int a, int b){
	
		cout << a+b;
	}

}s;

int main(){
	cout <<"hyder"<<endl;
	//s.sum();
	s.add(10,20);
	return 0;
}
