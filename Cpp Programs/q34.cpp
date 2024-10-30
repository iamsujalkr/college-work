#include <iostream>
using namespace std;

int main(){
    int a = 5;
    const int b = 10;
    int *const ptr = &a;
    cout << "Constant pointer ptr = " << *ptr << endl;
    cout << "changing value of a" << endl;
    *ptr = 10;
    cout << "Constant pointer ptr = " << *ptr << endl;
    cout << "changing addrress of ptr will result in error" << endl;
    
    const int *ptr1 = &b;
    cout << "Pointer to a constant ptr1 = " << *ptr1 << endl;
    cout << "changing address of ptr1" << endl;
    ptr1 = &a;
    cout << "Pointer to a constant ptr1 = " << *ptr1 << endl;
    cout << "changing value of ptr1 will result in error" << endl;
    return 0;
}
