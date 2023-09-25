#include<bits/stdc++.h>
using namespace std;

int FindUnique(int arr[], int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int n, le;
    cout<<"Enter the size of element: ";
    cin>>n;
    cout<<"Enter the element of the array which twice of one and ones on one: ";
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    le = sizeof(arr) / sizeof(arr[0]);
    int UniqueElement = FindUnique(arr, le);
    cout<<"The unique element is "<<UniqueElement;
}