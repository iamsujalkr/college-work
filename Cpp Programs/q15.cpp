#include<iostream>
using namespace std;

class Rectangle{
    int length, breadth;
    public:
    void input(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    void printDetails(){
        input();
        cout<<"Length = "<<length<<endl;
        cout<<"Breadth = "<<breadth<<endl;
    }
};

int main(){
    Rectangle r;
    r.printDetails();
    return 0;
}