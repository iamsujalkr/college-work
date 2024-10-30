#include <iostream>
using namespace std;

class Animal{
    public:
    Animal(){}
    virtual void speak(){
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal{
    public:
    Dog(){}
    void speak(){
        cout << "Dog barks" << endl;
    }
};

int main(){
    Animal *a;
    Dog d;
    a = &d;
    a->speak();
    return 0;
}

