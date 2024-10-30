#include <iostream>
using namespace std;

double* maths(int a, int b){
    int opr = 0;
    double* result = new double;
    cout << "1 - Addition" << endl;
    cout << "2 - Subtraction" << endl;
    cout << "3 - Multiplication" << endl;
    cout << "4 - Division" << endl;
    cout << "Enter your choice: ";
    cin >> opr;
    switch(opr){
        case 1:
            *result = a + b;
            break;
        case 2:
            *result = a - b;
            break;
        case 3:
            *result = a * b;
            break;
        case 4:
            if (b != 0){
            *result = a / b;
            }
            else{
                cout << "Error: Division by zero" << endl;
                return nullptr;
            }
            break;
        default:
        cout << "Invalid choice" << endl;
        return nullptr;
    }
    return result;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    double* result = maths(a, b);
    if (result != nullptr){
        cout << "Result: " << *result << endl;
        delete result;
    }
    return 0;
}

