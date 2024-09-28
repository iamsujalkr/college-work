#include <iostream>
using namespace std;

class Student{
    int roll;
    string name;
    public:
    void setData(){
        cout<<"Enter Roll No. : ";
        cin>>roll;
        cout<<"Enter Name : ";
        cin>>name;
    }
    void printDetail(){
        cout<<"Roll No. : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
    }
};

int main() {
    Student s1,s2;
    s1.setData();
    s2.setData();
    s1.printDetail(); 
    s2.printDetail();
    return 0; 
}
