#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int x){
        a = x;
    }
    A compare(A &obj2){
        if(a > obj2.a){
            return *this;
        }
        else{
            return obj2;
        }
    }
    void display(){
        cout << a << endl;
    }
};

int main(){
    A a(10);
    A b(20);
    A c = a.compare(b);
    c.display();
    return 0;
}
