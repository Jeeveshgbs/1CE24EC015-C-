#include<iostream>
using namespace std;

class Person
{
    public:
        string name;
};
int main()
{
    Person list_of_people[5];
    list_of_people[1].name="john";
    list_of_people[2].name="ram";
    list_of_people[3].name="anna";
    list_of_people[4].name="lakshman";

     
     for (int i=0;i<5;i++){
        cout<<list_of_people[i].name<<endl;
     }
     
}