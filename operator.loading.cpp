#include<iostream>
using namespace std;

class Distance
{
    public:
        int meter,centimeter;

        Distance(int m =0, int cm = 0) {
            meter = m;
            centimeter = cm;

     }
        Distance operator+( Distance d) {
            Distance temp;
            temp.centimeter = centimeter + d.centimeter;
            temp.meter = meter + d.meter+temp.centimeter / 100;
            temp.centimeter %= 100;
            return temp;
        }

        void display() {
            cout << meter <<" m "<<centimeter << " cm " << endl;
        }
};

int main() {
    Distance d1(1, 80), d2(2, 30);
    Distance d3=d1 + d2;
    d3.display();
    return 0;
}