#include<iostream>
using namespace std;

class Point
{
    public:
    string food="pizza";
};
int main(){
    Point P1;
    cout << "Food: " << P1.food << endl;
    cout<< "Pointer to food: " << &P1.food << endl; // Displaying the address of food
    return 0;
}