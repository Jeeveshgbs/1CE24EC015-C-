#include<iostream>
using namespace std;

// Function: x^3- x - 1 
float f(float x) {
    return x*x*x - x - 1;
}

// Derivative: 3x^2 - 1
float f_derivative(float x) {
    return 3*x*x - 1;
}

int main() {
    float x = 1.5;  
    
    cout << "Finding square root of 2 using Newton's method" << endl;
    cout << "Starting with guess: " << x << endl << endl;
    
    
    for(int i = 1; i <= 3; i++) {
        
        float new_x = x - f(x)/f_derivative(x);
        
        cout << "Step " << i << ": " << new_x << endl;
        
        x = new_x;  
    }
    
    cout << endl << "Final answer: " << x << endl;
    // cout << "Check: " << x << " × " << x << " = " << x*x << endl;
    
    return 0;
}