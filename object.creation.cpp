#include<iostream>
using namespace std;

class Car
{
    public:
    void show(){
        cout<<"THE CAR IS RUNNING"<<endl;
    }
};

int main()
{
    Car *c = new Car(); 
    c->show(); 
    delete c; 
    return 0;
}