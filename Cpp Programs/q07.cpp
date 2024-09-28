#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str;
    return 0;
}