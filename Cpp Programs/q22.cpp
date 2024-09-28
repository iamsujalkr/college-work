#include <iostream>
using namespace std;

class Complex{
    int real, img;
    public:
    Complex(){
        real = 0;
        img = 0;
    }
    Complex(int r, int i){
        real = r;
        img = i;
    }
    void display(){
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    Complex operator-(Complex c){
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    Complex operator*(Complex c){
        Complex temp;
        temp.real = real * c.real;
        temp.img = img * c.img;
        return temp;
    }
};

int main() {
    Complex c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2;
    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Addtion: ";
    c3.display();
    cout << "Subtraction: ";
    c3 = c1 - c2;
    c3.display();
    cout << "Multiplication: ";
    c3 = c1 * c2;
    c3.display();
    return 0;
}