#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    A(int x){
        a = x;
    }
    void compare(B &b);
};

class B{
    int b;
    public:
    B(int x){
        b = x;
    }
    friend void A::compare(B &b);
};

void A::compare(B &b){
    if(a > b.b){
        cout << "A is greater than B" << endl;
    }
    else if(a < b.b){
        cout << "B is greater than A" << endl;
    }
    else{
        cout << "A is equal to B" << endl;
    }
}

int main(){
    A a(10);
    B b(20);
    a.compare(b);
    return 0;
}
