#include<iostream>
using namespace std;

//creating class

class house
{
    private:
    //member variables
            int length=0,breadth=0;
    public:
            //member functions
            void setData(int x,int y)
            {
                length=x;
                breadth=y;

            }
            void area()
            {
                cout << "area of house =" << length * breadth << "sqft";
            }

};


int main()

{
    //creating object

    house gini;
   gini.setData(300,500);
   gini.area();
   return 0;

}