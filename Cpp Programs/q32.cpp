#include <iostream>
using namespace std;

class Rectangle{
    int length, breadth;
    public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void area(){
        cout << "Area is: " << length * breadth << endl;
    }
};
int main(){
    Rectangle r1(10, 20);
    Rectangle *ptr = &r1;
    ptr->area();
    return 0;
}
