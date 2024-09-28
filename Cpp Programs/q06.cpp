#include <iostream> 
using namespace std;

int main() {
    int n;
    float sum = 0;
    cout << "Enter the numbers to calculate average : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cout <<"Enter number "<< i <<" : ";
        cin >> a;
        sum+=a;
    }
    float avg = sum / n;
    cout <<"The average is "<< avg;
    return 0;
}