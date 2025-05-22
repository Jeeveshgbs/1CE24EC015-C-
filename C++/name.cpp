#include<iostream>
using namespace std;

class Person
{
public:
      string name;
      int age;

};

int main()
{
    Person P1;
    P1.name="raj";
    P1.age=21;

    Person P2;
    P1.name="anand";
    P1.age=20;
    
    cout<<  P1.name<<endl<<P1.age<<endl;
    cout<<  P2.name<<endl<<P2.age<<endl;
    
}


