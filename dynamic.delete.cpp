#include<iostream>
using namespace std;

int main() {
    float *number1 = new float(3.14);
    float *number2 = new float();
    *number2 = 2.58;

    cout<<*number1 << endl;
    cout<<*number2 << endl;
   
}