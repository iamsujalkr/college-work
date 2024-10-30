#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(int x){
        a = x;
    }
    void show(){
        cout << a << endl;
    }
    void operator++(){
        a++;
    }
};

int main(){
    A a(5);
    a.show();
    ++a;
    a.show();
    return 0;
}

