#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    string college="CITY Engineering college";

    public:
    Student(string n)
    {
        name=n;

    }
    string getCollege()
    {
        return college;
    }
    void getDetails()
    {
        cout<<" Name "<<endl;
        cout<<"college"<<endl;
    }
};

int main()
{
    Student S1("Jeevesh");
    cout<<S1.getCollege()<<endl;
    S1.getDetails();
}