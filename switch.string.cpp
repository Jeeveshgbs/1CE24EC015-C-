#include<iostream>
using namespace std;

int main(){
    char op ;
    int a,b,c;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation;+,-,*,%"<<endl;
    cin>>op;
    switch(op)
    {
    case '+':
        cout<< a + b <<endl;
        break;
    case '-':
        cout<< a - b<<endl;
        break;
    case '*':
        cout<< a * b<<endl;
        break;
    case '%':
        if (b!=0)
        {
            cout<< a % b<<endl;
        }else{
            cout<<"cannot be done"<<endl;
        }
                
    default:
        cout<<"Invalid operator"<<endl;
        break;        

    }

}