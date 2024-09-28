#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++){
        cout<<"Enter the element "<< i << " : ";
        cin >> num[i];
    }
    int searchNum;
    cout << "Enter the number to search : ";
    cin >> searchNum;
    int i = 0;
    int flag = 0;
    while(i < n){
        if(num[i] == searchNum){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 1){
        cout << "Number found at index " << i << endl;
    }
    else{
        cout << "Number not found" << endl;
    }
}