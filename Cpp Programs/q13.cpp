#include <iostream>
using namespace std;

inline void add(int a, int b){
    cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    add(a,b);
    return 0;
}

