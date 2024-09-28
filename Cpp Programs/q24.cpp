#include <iostream>
using namespace std;

class Box{
    int length;
    public:
    void setLength(int l){
        length = l;
    }
    void showLength(){
        cout<<"Length is: "<<length<<endl;
    }
    friend void updateLength(Box &b, int l);
};

void updateLength(Box &b, int l){
    b.length = l;
}

int main(){
    Box b;
    b.setLength(10);
    b.showLength();
    updateLength(b, 20);
    cout<<"Length Updated :-"<<endl;
    b.showLength();
    return 0;
}