#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternative(int arr[], int n) {
    int temp = arr[0];
    for(int i=0; i<n; i+=2) {
        if(i+1 < n) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

int main() {
    int n, le;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    le = sizeof(arr)/sizeof(arr[0]);
    swapAlternative(arr, le);
    print(arr, le);
}