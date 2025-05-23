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
        cout<<"========================="<<endl;


    }
};

int main()
{
    string name,pancard,adharcard;
    vector<Person>list_of_user;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the name for"<<i+1<<":"<<endl;
        cin>>name;
        cout<<"Enter the pancard"<<i+1<<":"<<endl;
        cin>>pancard;
        cout<<"Enter the adhar"<<i+1<<":"<<endl;
        cin>>adharcard;
        list_of_user.push_back(Person(name,pancard,adharcard));
    }

    for(Person user:list_of_user)
    {
        user.display_details();
    }
}