#include<iostream>
using namespace std;

class Person
{
public:
       Person()
       {
        cout<<"Hi from const"<<endl;
       } 

       void hello()
       {
        cout<<"Hi from method"<<endl;
       }  

};

int main()
{
    Person P1;
    P1.hello();
}