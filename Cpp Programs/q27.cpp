#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum: " << a + b << endl;
}
void add(int a, int b, int c) {
    cout << "Sum: " << a + b + c << endl;
}
void add(double a, double b) {
    cout << "Sum: " << a + b << endl;
}
int main() {
    add(5, 10);
    add(5, 10, 15);
    add(5.5, 10.5);
    return 0;
}
