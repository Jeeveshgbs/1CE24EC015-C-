#include<iostream>
using namespace std;

void BubbleSort(int arr[], int length)
{
    for(int i = 0;i <length ;i++ )
   {
        for(int j=0 ;j< length; j++){

        int temp;
        if(arr[j] > arr[j+1])
            {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    
}
void print(int arr[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[]={5,4,7,9,0,6,4,2,6};
    int arraySize = sizeof(arr)/sizeof(arr[0]);
    print(arr , arraySize);
    BubbleSort(arr, arraySize);
    print(arr, arraySize);
    return 0;


}