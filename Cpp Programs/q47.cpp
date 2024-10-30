#include <iostream>
using namespace std;

class Employee{
    private:
        int id;
    protected:
        int salary;
    public:
    Employee(){}
    Employee(int id, int salary){
        this->id = id;
        this->salary = salary;
    }
    int getId(){
        return id;
    }
    void setId(int id){
        this->id = id;
    }
};

class Manager : public Employee{
    public:
    string job;
    Manager(int id, int salary, string job){
        setId(id);
        this->salary = salary;
        this->job = job;
    }
    void show(){
        cout << "Id: " << getId() << endl;
        cout << "Salary: " << salary << endl;
        cout << "Name: " << job << endl;
    }
};

class Salesman : private Employee{
    public:
    string job;
    Salesman(int id, int salary, string job){
        setId(id);
        this->salary = salary;
        this->job = job;
    }
    void show(){
        cout << "Id: " << getId() << endl;
        cout << "Salary: " << salary << endl;
        cout << "Name: " << job << endl;
    }
};

class Peon : protected Employee{
    public:
    string job;
    Peon(int id, int salary, string job){
        setId(id);
        this->salary = salary;
        this->job = job;
    }
    void show(){
        cout << "Id: " << getId() << endl;
        cout << "Salary: " << salary << endl;
        cout << "Name: " << job << endl;
    }
};

int main(){
    Manager m(1, 10000, "Manager");
    m.show();
    Salesman s(2, 5000, "Salesman");
    s.show();
    Peon p(3, 2000, "Peon");
    p.show();
    return 0;
}

