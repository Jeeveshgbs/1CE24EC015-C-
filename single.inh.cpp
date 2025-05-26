#include<iostream>
using namespace std;

class Person
{
    public:
        string name;
        string gender;
        int age;
};

class Student : public Person
{
    public:
        string college;
        string department;
};

class Teacher : public Person
{
    public:
        string college;
        int salary;
        string designation;
};

int main()
{
    Student S1;
    Teacher T1;
    S1.name="jeevesh ";
    S1.age= 19;
    S1.college="CITY COLLEGE";
    S1.department="ECE";
    S1.gender= "MALE" ;
    T1.college="CITY COLLEGE";
    T1.designation="LECTURER";
    T1.salary=800000;
    cout<<"Student name is "<<S1.name<<endl;
    cout<<"Student  age is"<<S1.age<<endl;
    cout<<"Student college is "<<S1.college<<endl;
    cout<<"Student department is "<<S1.department<<endl;
    cout<<"Teacher name is "<<T1.name<<endl;
    cout<<"Teacher  college is "<<T1.college<<endl;
    cout<<"Teacher designation is "<<T1.designation<<endl;
    cout<<"Teacher salary is "<<T1.salary<<endl;
}
