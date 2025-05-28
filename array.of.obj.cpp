#include<iostream>
using namespace std;

class Person
{

public:
    string name;

    void setName(){
        cout<<" Enter name: ";
        cin>>name;
    }
    void getName()
    {
        cout<<name<<endl;
    }
};

int main()
{
    Person *listOfpeople = new Person[3];
    for (int i = 0; i < 3; i++)
    {
       
        listOfpeople[i].setName();
    }
    for (int i = 0; i < 3; i++)
    {
        
        listOfpeople[i].getName();
    }
}   