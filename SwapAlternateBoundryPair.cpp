#include<bits/stdc++.h>
using namespace std;

void swapAlternateBoundryPair(int arr[], int n) {
    int i=0, j=n-1, temp = arr[0];
    while ( i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i += 2;
        j -= 2;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() 
{
    int n, le;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    le = sizeof(arr) / sizeof(arr[0]);
    swapAlternateBoundryPair(arr, le);
    printArray(arr, le);
}