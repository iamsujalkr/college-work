#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int reverse = 0;
    int digit;
    int temp = num;
    while (temp != 0) {
        digit = temp % 10;
        temp /= 10;
        reverse = reverse * 10 + digit;
    }
    if(num == reverse){
        cout<<"The given number is a palindrome";
    }
    else{
        cout << "The given number is not a plaindorme";
    }
    return 0;
}
