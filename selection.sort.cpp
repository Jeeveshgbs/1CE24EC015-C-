#include<iostream>
using namespace std;   

void selectionSort(int arr[],int n)
{
    for(int i=0; i<n - 1;i++)
    {
        int minIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;

    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {20 , 10, 14 , 37, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    selectionSort(arr, n);
    
    cout << "\nSorted array: ";
    printArray(arr, n);
    
    return 0;
}