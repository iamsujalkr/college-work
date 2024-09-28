#include <iostream>
using namespace std;

int main() {
    // int num1, num2, num3;
    int num[3];
    for(int i = 0; i < 3; i++){
        cout << "Enter the number " << i << " :  ";
        cin >> num[i];
    }
    int larger = (num[0] >= num[1] && num[0] >= num[2]) ? num[0] : (num[1] >= num[0] && num[1] >= num[2]) ? num[1] : num[2];
    cout << "Largest number is  "<< larger;
    return 0;
}

Enter the number 0 :  4
Enter the number 1 :  5
Enter the number 2 :  9
Largest number is  9