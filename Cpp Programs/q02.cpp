#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    char upch = (ch >= 'a' && ch <= 'z') ? ch - 32 : ch;
    cout << "Uppercase character is : " << upch;
    return 0;
}

