#include<iostream>
using namespace std;

float f_of_x(float x){
    return x*x*-2;
}

float f_dash_x(float x)
{
    return 2*x;

}
float formula(float x_not)
{
    return x_not=x_not-(f_of_x(x_not)/f_dash_x(x_not));
}

int main(){
    float x_not=1.5;
    float before=x_not ,after=0;

    do
    {
        after=formula(before);
        cout<<"x:"<<after<<endl;
        if (before==after)
        {
            break;
        }
        
        before=after;
    }  
    
}