#include<bits/stdc++.h>
using namespace std;
void print2largest(int arr[], int arr_size)
{
    int i,first,second;
    if(arr_size < 2)
    {
        cout<<"Invalid Input";
        return;
    }
    sort(arr, arr+arr_size);
    for(int i=arr_size-2; i>=0; i--)
    {
        if(arr[i] != arr[arr_size-1])
        {
            cout<<"The second largest element is "<<arr[i];
            return;
        }
    }
    cout<<"There is no second largest element\n";
}
int main()
{
    int n, le;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    le = sizeof(arr)/sizeof(arr[0]);
    print2largest(arr, le);
    return 0;
}