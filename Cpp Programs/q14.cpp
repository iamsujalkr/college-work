#include <iostream> 
using namespace std;

class Rectangle{
    int lenght,breadth;
    public:
    void setData(int l,int b){
        lenght=l;
        breadth=b;
    }
    void area();
};
void Rectangle::area(){
    cout<<"Area of rectangle is "<<lenght*breadth<<endl;
}

int main(){
    Rectangle r;
    r.setData(10,20);
    r.area();
    return 0;
}