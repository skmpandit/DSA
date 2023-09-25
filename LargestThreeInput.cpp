#include<bits/stdc++.h>
using namespace std;
void print3largest(int arr[], int n) {
    int first, second, third;
    if(n < 3) 
    {
        cout<<"Invalid Input";
        return;
    }
    third=first=second=INT_MIN;
    for(int i=0; i<n; i++) 
    {
        if(arr[i]>first) 
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) 
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second)
        {
            third = arr[i];
        }
    }
    cout<<"Three largest element are" <<first<<" "<<second<<" "<<third<<endl;
}

int main() {
    int n, le;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    le = sizeof(arr)/sizeof(arr[0]);
    print3largest(arr,le);
    return 0;
}