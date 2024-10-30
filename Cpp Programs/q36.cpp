#include <iostream>
using namespace std;

class Rect{
    int width, height;
    public:
    Rect(){
        width = 1;
        height = 1;
    }
    Rect(int w, int h){
        width = w;
        height = h;
    }
    Rect(int w){
        width = w;
        height = 5;
    }
    int getArea(){
        return width * height;
    }
    void show(){
        cout << width << " " << height << endl;
    }
};

int main(){
    Rect a(3, 2);
    cout << a.getArea() << endl;
    Rect b(3);
    cout << b.getArea() << endl;
    return 0;
}

