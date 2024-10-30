#include <iostream>
using namespace std;

class Box{
    int a;
    public:
    Box(){}
    Box(int x){
        a=x;
    }
    void show(){
        cout<< "Value is " <<a<<endl;
    }
};

int main(){
    Box b = Box(3);
    for(int i = 0; i <= 2; i++){
        b = Box(i);
        b.show();
    }
    return 0;
}

