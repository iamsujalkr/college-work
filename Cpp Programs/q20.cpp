#include <iostream>
using namespace std;

class Student{
    string name;
    int roll;
    static int count;
    public:
    Student(){
        count++;
    }
    static void printCoount(){
        cout<<"Total number of students: "<<count<<endl;
    }
};
int Student::count = 0;

int main() {
    Student s1, s2, s3;
    Student::printCoount();
    return 0;
}
