#include<iostream>
using namespace std;

class Math{
    public:
        int add(int a, int b)
        {
            return a+b;
        }      
        double add(double a, double b)
        {
            return a+b;
        }
        int add(int a, int b, int c)
        {
            return a+b+c;
        }

};
int main()
{
        Math m;
        cout << "Sum of 2 integers: " << m.add(5, 10) << endl; 
        cout << "Sum of 2 doubles: " << m.add(5.5, 10.5) << endl; 
        cout << "Sum of 3 integers: " << m.add(5, 10, 15) << endl; 
        return 0;
}

