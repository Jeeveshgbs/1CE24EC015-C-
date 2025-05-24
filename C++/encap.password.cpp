#include<iostream>
using namespace std;

class Passwordcheker 
{
private:
    int pin;

public:
    void setPin(int p)
    {
        pin=p;
    }
    void login(int pin_number)
    {
        if(pin==pin_number)
        {
            cout<<"Logged in"<<endl;

        }else{
            cout<<"Wrong pin"<<endl;

        }
    }
};

int main()
{
    Passwordcheker P1;
    P1.setPin(123);
    P1.login(456);
    P1.setPin(456);
    P1.login(456);
}