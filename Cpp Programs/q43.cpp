#include <iostream>
using namespace std;

class Vector{
    int x,y;
    public:
    Vector(){}
    Vector(int a, int b){
        x = a;
        y = b;
    }
    Vector operator+(Vector &obj){
        Vector ref;
        ref.x = x + obj.x;
        ref.y = y + obj.y;
        return ref;
    }
    void show(){
        cout << x << " " << y << endl;
    }
};

int main(){
    Vector v1(1,2);
    Vector v2(3,4);
    Vector v3 = v1 + v2;
    v3.show();
    return 0;
}

