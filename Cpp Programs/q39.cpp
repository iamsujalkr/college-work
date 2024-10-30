#include <iostream>
using namespace std;

class Rect{
    int width;
    int *height;
    public:
        Rect(int w, int h){
            width = w;
            height = new int(h);
        }
        ~Rect(){
            delete height;
            cout << "Destructor is called" << endl;
        }
        void show(){
            cout << width << " " << *height << endl;
        }
};

int main(){
    Rect a(3, 5);
    a.show();
    return 0;
}

