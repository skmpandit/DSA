#include<bits/stdc++.h>
using namespace std;


void LeftRotate(int arr[], int start, int end)
{
    while(start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void RotateLeftUsingReverse(int arr[], int k, int size) {
    if(k==0) {
        return;
    }
    k %= size;
    LeftRotate(arr, 0, k-1);         // reverse all array
    LeftRotate(arr, k, size-1);
    LeftRotate(arr, 0, size-1);
}


void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n, le, k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elment of array: ";
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter the rotaion size: ";
    cin>>k;
    le = sizeof(arr) / sizeof(arr[0]);
    RotateLeftUsingReverse(arr, k, le);
    print(arr, le);
}