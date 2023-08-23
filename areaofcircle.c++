#include <iostream>
using namespace std;

class circle
{
    private:
        int radius;
        
    public:
        void setRadius(int x){
            radius = x;
        }
        void area()
        {
            cout << "area of circle is =" << 3.14*radius*radius;
        }
};
int main (){
     circle data;
   data.setRadius(3);
   data.area();
   return 0;


}