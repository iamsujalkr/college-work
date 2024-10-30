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
        Rect(Rect& obj){
            width = obj.width;
            height = new int(*obj.height);
        }
        ~Rect(){
            delete height;
        }
        void show(){
            cout << width << " " << *height << endl;
        }
};

int main(){
    Rect a(3, 5);
    Rect b(a);
    a.show();
    b.show();
    return 0;
}

