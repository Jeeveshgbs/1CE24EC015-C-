#include<iostream>
using namespace std;

class Prime
{
public:
    int  isPrime(int num)
    {
        if (num <= 1) ; 
        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) {
                return false;
            }; 
        }
        return true; 
}
};

int main()
{
    Prime p;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (p.isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}