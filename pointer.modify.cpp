#include<iostream>
using namespace std;

int main(){
    string food ="pizza";
    string *ptr = &food; 

    cout << "Food: " << food << endl;
    cout<<"address: "<<&food << endl;
    *ptr="briyani"; 
    cout << "Food after modification: " << food << endl;
    cout<<"address of food: "<<food<< endl;
}