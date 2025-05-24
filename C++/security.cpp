#include<iostream>
using namespace std;

class Security
{
    public:
        virtual void dogs() = 0;
        virtual void security() = 0;
        virtual void cctv() = 0;

};
class Home: public Security
{
    public:
    void dogs() override
    {
        cout<<"they can guard the house "<<endl;
    }
    
    void security() override
    {
        cout<<" they can also guard the house"<<endl;
    }
    void cctv() override
    {
        cout<<"it can be displayed in tv"<<endl;
    }
};

int main()
{
    Home H1;
    H1.cctv();
    H1.dogs();
    H1.security();
}