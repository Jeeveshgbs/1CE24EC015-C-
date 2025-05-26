#include<iostream>
using namespace std;

class Person
{
public:
    string name;
    int number;
    
    Person(string person_name,int persons_adhar)
    {
        name=person_name;
        number=persons_adhar;
    }

    void intro()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"Adhar number is:"<<number<<endl;
    }
};
int main()
{
    Person P1("RAM",12345);
    Person P2("SHYAM",76543);
    P1.intro();
    P2.intro();
    return 0;
}    