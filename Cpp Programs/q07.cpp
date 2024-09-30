#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    string str2 = str;
    reverse(str2.begin(), str2.end());
    if(str == str2){
        cout << "The given string is plalindrome";
    }
    else{
        cout << "The given string is not a palindrome";
    }
    return 0;
}