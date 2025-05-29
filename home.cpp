#include<iostream>
using namespace std;

float areaOfrectangle(float l,float b)
{
    float door = l * b ;
    return door;
     
}
float areaOftriangle(float b,float h)
{
    float window1 = 0.5 * b * h ;
    return window1 ;
}

float areaOfcircle(float r)
{
    float window2 = 3.14 * r * r ;
    return window2 ;
}

int main()
{
    float fullArea =areaOfrectangle(10,10) + areaOftriangle(5,12) ;
    float subArea = areaOfcircle(2) + areaOfrectangle(3,7) + areaOftriangle(2,3) ;
    cout<<"Total area of the house is: "<<fullArea - subArea<<endl;
    return 0;
}

