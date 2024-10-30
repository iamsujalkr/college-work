#include <iostream>
using namespace std;

class SHape{
    public:
    SHape(){}
    virtual void draw(){
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public SHape{
    public:
    Circle(){}
    void draw(){
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public SHape{
    public:
    Rectangle(){}
    void draw(){
        cout << "Drawing a rectangle" << endl;
    }
};

int main(){
    SHape *s;
    Circle c;
    Rectangle r;
    s = &c;
    s->draw();
    s = &r;
    s->draw();
    return 0;
}
