#include<iostream>
using namespace std;

class person {
private:
    string name;
    int age;
    float height;

public:
    person(string name_a, int age_a, float height_a) {
        name = name_a;
        age = age_a;
        height = height_a;
    }

    person(const person& obj1) {
        name = obj1.name;
        age = obj1.age;
        height = obj1.height;
    }

    void getData() {
        cout << endl << "Name " << name;
        cout << endl << "Age " << age;
        cout << endl << "Height " << height;
    }
};

int main() {
	
    person obj1("fida", 21, 6.1);
    person obj2(obj1);
    obj1.getData();
    obj2.getData();
    return 0;
}

