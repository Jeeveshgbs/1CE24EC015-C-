#include<iostream>
using namespace std;

class Person
{
public:
      void hello()
     {
        cout<<"hello"<<endl;
        hello2()
     }
private:
     void hello2()
     {
        cout<<"hello 2 "<<endl;
     }  

};
int main()
{
    Person P1;
    P1.hello();
}