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
        cin.sync();
        cin>>name;
    }
    void printDetail(){
        cout<<"Roll No. : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
    }
};

int main() {
    Student s[3];
    for(int i=0;i<3;i++){
        cout<<"Enter Details of Student "<<i+1<<endl;
        s[i].setData();
    }
    for(int i=0;i<3;i++){
        cout<<"Details of Student "<<i+1<<endl;
        s[i].printDetail();
    }   
    return 0;
}