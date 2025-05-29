#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("example.txt");
    file<<"Hello,C++ File";
    file.close();
    cout<<"file written successfully"<<endl;
    return 0;
}