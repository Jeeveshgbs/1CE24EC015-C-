#include<iostream>
using namespace std;

class Person
{

    public:
    string name="default name";

    Person(string name){
        this->name=name;
    }
    void print()
        {
            cout<<name<<endl;
        }
};
int main()
{
    Person P1("Jeevesh" );
    P1.print();
}