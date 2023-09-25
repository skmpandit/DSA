#include<bits/stdc++.h>
using namespace std;
void print3largest(int arr[], int arr_size)
{
    int first, second, third;
    if(arr_size < 3) 
    {
        cout<<"Invalid Input";
        return;
    }
    third = first = second = INT_MIN;
    for(int i=0; i<arr_size; i++) 
    {
        if(arr[i] > first) 
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
    cout<<"Three largest elements are "<<first<<" "<<second<<" "<<third<<endl;
}

int main(){
    int arr[] = {12, 14, 29, 30, 21, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    print3largest(arr, n);
    return 0;
}