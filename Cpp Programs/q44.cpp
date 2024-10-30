#include <iostream>
using namespace std;

class Complex{
    int real, img;
    public:
    Complex(){}
    Complex(int a, int b){
        real = a;
        img = b;
    }
    friend Complex operator+(Complex &obj1, Complex &obj2);
    void show(){
        cout << real << " + " << img << "i" << endl;
    }
};

Complex operator+(Complex &obj1, Complex &obj2){
    Complex ref;
    ref.real = obj1.real + obj2.real;
    ref.img = obj1.img + obj2.img;
    return ref;
}

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3 = c1 + c2;
    c3.show();
    return 0;
}

