#include<bits/stdc++.h>
using namespace std;
void print2Largest(int arr[], int arr_size)
{
    int i,first,second,
    if(arr_size < 2)
    {
        cout<<"Invalid Input";
        return;
    }
    first = second = INT_MIN;
    for(int i=0; i<arr_size; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    if(second == INT_MIN)
    {
        cout<<"There is no second largest elements";
    }
    else
    {
        cout<<"The second largest element is "<<second;
    }
}
int main()
{
    int n, le;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    int arr[n];
    for(int i=0; i<n; i++) 
    {
        cin>>arr[i];
    }
}