#include <iostream>
#include <string>

class ClassA;
class ClassB {
private:
    int valueB;
public:
    ClassB(int val){
        valueB = val;
    }
    friend void showValues(const ClassA& a, const ClassB& b);
};

class ClassA {
private:
    int valueA;
public:
    ClassA(int val){
        valueA = val;
    }
    friend void showValues(const ClassA& a, const ClassB& b);
};

void showValues(const ClassA& a, const ClassB& b) {
    std::cout << "Value from ClassA: " << a.valueA << std::endl;
    std::cout << "Value from ClassB: " << b.valueB << std::endl;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    showValues(objA, objB);
    return 0;
}
