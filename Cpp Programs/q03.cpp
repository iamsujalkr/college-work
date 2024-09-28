#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        num/=10;
        sum += digit;
    }
    cout << "Sum is : "<< sum;
    return 0;
}
