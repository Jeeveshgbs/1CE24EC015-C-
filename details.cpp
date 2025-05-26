#include<iostream>
#include<vector>
using namespace std;

class Person
{
public:
    string name;
    string pan_card_number;
    string adhar_card_number;

    Person(string user_name,string p_card,string a_card)
    {
        name=user_name;
        pan_card_number=p_card;
        adhar_card_number=a_card;
    }  
    void display_details()
    {
        cout<<"user details"<<endl;
        cout<<"user name"<<name<<endl;
        cout<<"Pancard"<< pan_card_number << endl;
        cout<<"Adhar card"<<adhar_card_number<<endl;


    }
};

int main()
{
    vector<Person>list_of_user;
    list_of_user.push_back(Person("john","PAR1234RF","1234098"));
}