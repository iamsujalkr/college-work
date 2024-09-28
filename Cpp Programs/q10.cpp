#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    char grade;;
};

int main() {
    Student s1 = {"Sujal", 1, 'A'};
    Student s2 = {"Romeo", 2, 'A'};
    Student s3 = {"Raj", 3, 'B'};

    cout << "Details of student 1 : "<< endl;
    cout << "Name : " << s1.name << endl;
    cout << "Roll : " << s1.roll << endl;
    cout << "Grade : " << s1.grade << endl;
    cout << endl;
    cout << "Details of student 2 : "<< endl;
    cout << "Name : " << s2.name << endl;
    cout << "Roll : " << s2.roll << endl;
    cout << "Grade : " << s2.grade << endl;
    cout << endl;
    cout << "Details of student 3 : "<< endl;
    cout << "Name : " << s3.name << endl;
    cout << "Roll : " << s3.roll << endl;
    cout << "Grade : " << s3.grade << endl;
    return 0;
}