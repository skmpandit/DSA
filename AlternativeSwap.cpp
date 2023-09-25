#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlernative(int arr[], int size) {
    for(int i=0; i<size; i+=2) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {
    int n, le;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    le = sizeof(arr)/sizeof(arr[0]);
    swapAlernative(arr, le);
    print(arr, le);
}