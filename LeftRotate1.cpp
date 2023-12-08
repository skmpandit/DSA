#include<bits/stdc++.h>
#include<array>
using namespace std;

void leftRotate(int arr[], int l, int r) {
    while (l<r)
    {
        swap(arr[l++], arr[r--]);
    }
    
}

void rotateArray(int arr[], int k, int size) {
    if(k==0) {
        return;
    }
    k %= size;
    leftRotate(arr, 0, k - 1);
    leftRotate(arr, k, size -1 );
    leftRotate(arr, 0, size -1 );
}

void print(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n,le,k;
    cout<<"Enter length of array: ";
    cin>>n;
    cout<<"Enter the element of the Array: ";
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter the rotation size: ";
    cin>>k;
    rotateArray(arr, k, size);
    print(arr, size);
}