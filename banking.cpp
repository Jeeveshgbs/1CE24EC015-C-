#include<iostream>
#include<vector>
using namespace std;


int main(){
    int options;
    while (true)
    {
        cout<<" Choose the option "<<endl;
        cout<<"1.CREATE ACCOUNT"<<endl;
        cout<<"2.LIST ALL USERS"<<endl;
        cout<<"3.EXIT THE PROGRAM"<<endl;
        cin>>options;
        switch(options)
        {
            case 1:
            {
                 string name,pancard,adharcard;
                 vector<Person>list_of_user;
                for(int i=0;i<3;i++)
    
            cout<<"CREATING AN ACCOUNT"<<endl;
            cout<<"Enter the name for"<<endl;
            cin>>name;
            cout<<"Enter the pancard"<<endl;
            cin>>pancard;
            cout<<"Enter the adhar"<<endl;
            cin>>adharcard;
            list_of_user.push_back(Person(name,pancard,adharcard));
             }
                break;

            case 2:
                cout<<"LISTING ALL USERS"<<endl;
                for(Person user:list_of_user)
                {   
                    user.display_details();
                }
                break;

            case 3:
                cout<<"EXITING"<<endl;
                return 0;
                break;

            default:
                break;
                    
        }
    }
    
}