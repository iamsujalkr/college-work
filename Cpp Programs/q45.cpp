#include <iostream>
using namespace std;

class Distance{
    int meter;
    public:
    Distance(){}
    Distance(int m){
        meter = m;
    }
    void show(){
        cout << "Distance is "<< meter << " meters" << endl;
    }
};

int main(){
    Distance d1(10);
    d1.show();
    return 0;
}

