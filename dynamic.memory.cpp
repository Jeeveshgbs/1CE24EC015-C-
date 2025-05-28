#include<iostream>
using namespace std;

class Person{
public:
    string name="default name";
    int age=0;

    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void print()
        {
            cout<<name<<endl;
            cout<<age<<endl;
        }
};

int main() {
    Person P1("Jeevesh", 19);
    P1.print();
    cout<<"size of variable: " << sizeof(P1) << " bytes" << endl;

}
    