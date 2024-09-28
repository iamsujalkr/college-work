#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length,breadth;
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    void show(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
    }
};
void passbyvalue(Rectangle r){
    r.length=10;
    r.breadth=10;
}
void passbyreference(Rectangle &r){
    r.length=10;
    r.breadth=10;
}
void passbyaddress(Rectangle *r){
    r->length=10;
    r->breadth=10;
}

int main() {
    Rectangle r(5,4);
    r.show();
    cout << "Pass by value :-" << endl;
    passbyvalue(r);
    r.show();
    cout << "Pass by reference :-" << endl;
    passbyreference(r);
    r.show();
    cout << "Pass by address :" << endl;
    passbyaddress(&r);
    r.show();
    return 0;
}