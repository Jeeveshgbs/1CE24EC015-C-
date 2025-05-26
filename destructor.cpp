#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    Person(string user_name)
    {
        name=user_name;
        cout<<"  Object created:  "<<name<<endl;
    }
    ~Person()
    {
        cout<<"  Object destructed:  "<<name<<endl;
    }    
};

int main()
{
    Person P1(" Jeevesh ");
    Person P2(" G B ");
}