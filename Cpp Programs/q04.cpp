#include <iostream>
using namespace std;

void fibo() {
    static int a = 0;
    static int b = 1;
    int c = a + b;
    cout << c << " ";
    a = b;
    b = c;

}

int main() {
    int num;
    cout << "Enter the nth number : ";
    cin >> num;
    if (num == 1){
        cout << 0 ;
    }
    else if (num > 1) {
        cout <<"Fibonacci series upto "<< num <<"th term : " << "0 1 ";
        for(int i = 2; i < num; i++){
            fibo();
        }
    }
    
}
