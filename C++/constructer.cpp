#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    
    Person(int person_age,string person_name)
    {
        name=person_name;
        age=person_age;
    
    }

    void intro()
    {
        cout<<"My name is: "<<name<<endl;
        cout<<"My age is: "<<age<<endl;
    }
};

int main()
{
    Person P1(19,"Jeevesh");
    Person P2(21,"Ram");
    P1.intro();
    P2.intro();
}