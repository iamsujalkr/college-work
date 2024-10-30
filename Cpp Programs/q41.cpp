#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(){}
    A(int x){
        a = x;
    }
    void show(){
        cout << a << endl;
    }
    A operator&(A &obj){
        A ref;
        ref.a = a & obj.a;
        return ref;
    }
};

int main(){
    A a(5);
    A b(6);
    A c = a & b;
    c.show();
    return 0;
}

