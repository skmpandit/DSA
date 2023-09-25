#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int k, int le) {
    k %= le;
    int temp[k];
    for(int i=0; i<k; i++) {            // Store the first k elements in a temp array 
        temp[i] = arr[i];
    }
    for(int i=0; i<le-k; i++) {             // Shift rest of the array
        arr[i] = arr[i+k];
    }
    for(int i=le-k; i<le; i++) {     // Store back k elements 
        arr[i] = temp[i-k-1];
    }
}

void print(int arr[], int le) {
    for(int i=0; i<le; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n, le, k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter rotation size: ";
    cin>>k;
    le = sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr, k, le);
    print(arr, le);
}