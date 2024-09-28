#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int *ptr = new int[n];
    cout << "Array memory allocated successfully" << endl;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> ptr[i];
    }
    cout << "The array elements are : ";
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    delete[] ptr;
    cout << "Array memory deallocated successfully" << endl;
    return 0;
}