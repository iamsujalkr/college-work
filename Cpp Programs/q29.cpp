#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number : ";
    int *ptr = new int;
    cin >> *ptr;
    cout << "The number is : " << *ptr << endl;
    delete ptr;
    return 0;
}