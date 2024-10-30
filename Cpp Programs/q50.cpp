#include <iostream>
using namespace std;

class Device{
    public:
    Device(){}
    virtual void operate() = 0;
};

class Printer : public Device{
    public:
    Printer(){}
    void operate(){
        cout << "print" << endl;
    }
};

class Scanner : public Device{
    public:
    Scanner(){}
    void operate(){
        cout << "scan" << endl;
    }
};

int main(){
    Printer p;
    Scanner s;
    p.operate();
    s.operate();
    return 0;
}

