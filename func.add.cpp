#include<iostream>
using namespace std;

int add(int x, int y){
    return x + y;

    }

int main()
{
    int x ,y,sum;

    cout<<"for x"<<endl;
    cin>>x;

    cout<<"for y"<<endl;
    cin>>y;
    sum = add(x,y);

    cout<<"sum is: "<<sum<<endl;
}    
