#include<iostream>
using namespace std;

float volume(float x){
    return x * x * x ;

    }

int main()
{
    float x,cube ;

    cout<<"for x"<<endl;
    cin>>x;
    cube = volume(x);

    cout<<"volume is: "<<cube <<endl;
}    
