#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    Person(string n){
        name = n;
    }
};

class Student : public Person{
    public:
    int roll;
    Student(string n, int r) : Person(n){
        roll = r;
    }
    void show(){
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main(){
    Student s1("John", 10);
    s1.show();
    return 0;
}


