#include <iostream>
using namespace std;

class Rectangle{
    int length, breadth;
    public:
    void setData(){
        cout<<"Enter length and breadth: ";
        cin>>length>>breadth;
    }
    void getData(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
    }
    Rectangle add(Rectangle r2){
        Rectangle temp;
        temp.length = length + r2.length;
        temp.breadth = breadth + r2.breadth;
        return temp;
    }
};

int main(){
    Rectangle r1, r2, r3;
    r1.setData();
    r2.setData();
    r3 = r1.add(r2);
    r3.getData();
    return 0;
}