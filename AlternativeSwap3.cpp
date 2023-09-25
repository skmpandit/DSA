#include<iostream>
using namespace std;

void Print(int arr[], int n) {
    for(int i=0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}

void SwapAlternative(int arr[], int size) {
    int temp = 0;
    for(int i=0; i < size; i+=2) {
        if(i+1 < size) {
            temp = arr[i];
            arr[i] =arr[i+1];
            arr[i+1] = temp; 
        }
    }
}

int main() {
    int n, le; 
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the element of Array: ";
    int arr[n]; 
    for(int i=0; i < n; i++) {
        cin>>arr[i];
    }
    le = sizeof(arr) / sizeof(arr[0]);
    SwapAlternative(arr, le);
    Print(arr, le);
}