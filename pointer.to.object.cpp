#include<iostream>
using namespace std;

class Book
{
    public:
    void showtitle()
    {
        cout << "C++ Programming" << endl;
    }
};

int main()
{
    Book b;
    Book *ptr = &b; 
    ptr->showtitle(); 
    return 0;
}