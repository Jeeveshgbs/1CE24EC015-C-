#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;

public:
void setName(string n )
{
    name = n;
    
}
void setAge(int a)
{
    age =a;
} 
string getName()
{
    return name;
    
} 
int getAge()
{
    return age;
}  
};

int main()
{
    Person P1;
    P1.setName("Jeevesh");
    cout<<P1.getName()<<endl;
    P1.setAge(19);
    cout<<P1.getAge()<<endl;
}