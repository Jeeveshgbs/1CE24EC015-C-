#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int result=add(6,10);
    cout<<"result: "<<result<<endl;
}