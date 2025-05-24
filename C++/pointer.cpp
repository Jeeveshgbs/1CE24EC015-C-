#include<iostream>
using namespace std;

class Memorymanager{
public:
     int *arr;

     Memorymanager (int size){
        arr=new int(size);
        cout<<"Memory allocated for array."<<endl;

     }
     ~Memorymanager()
     {
        delete[] arr;
        cout<<"Memory allocated."<<endl;
     }
        
};

int main()
{
    Memorymanager mm(5);
    return 0;
}