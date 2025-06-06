#include<iostream>
using namespace std;

// Function: x² - 2 (we want to find where this equals 0, which gives us √2)
float f(float x) {
    return x*x - 2;
}

// Derivative: 2x
float f_derivative(float x) {
    return 2*x;
}

int main() {
    float x = 1.5;  // Starting guess
    
    cout << "Finding square root of 2 using Newton's method" << endl;
    cout << "Starting with guess: " << x << endl << endl;
    
    // Do Newton's method 4 times
    for(int i = 1; i <= 4; i++) {
        // Newton's formula: new_x = old_x - f(x)/f'(x)
        float new_x = x - f(x)/f_derivative(x);
        
        cout << "Step " << i << ": " << new_x << endl;
        
        x = new_x;  // Update x for next step
    }
    
    cout << endl << "Final answer: " << x << endl;
    // cout << "Check: " << x << " × " << x << " = " << x*x << endl;
    
    return 0;
}