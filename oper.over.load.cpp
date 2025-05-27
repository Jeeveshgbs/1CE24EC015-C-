#include<iostream>
using namespace std;

class Point{
public:
    int x, y;

    Point(int a,int b) {
        x = a;
        y = b;
    }

    Point operator-(Point p) {
        return Point(x - p.x, y - p.y);
    }
    void show(){
        cout  << x << ", " << y << endl;

    }
};

int main(){
    Point P1(1,2);
    Point P2(3,4);
    Point P3 = P2 - P1;
    P3.show();
}
