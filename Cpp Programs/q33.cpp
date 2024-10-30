#include <iostream>
using namespace std;

int main(){
    int a = 5;
    char b = 'A';
    void *ptr;

    ptr = &a;
    cout << *(int *)ptr << endl;
    ptr = &b;
    cout << *(char *)ptr << endl;
    return 0;
}
