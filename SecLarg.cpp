#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n)
{
    int largest = 0, secondlargest = -1;
    for(int i=1; i<n; i++) 
    {
        if(arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(secondlargest == -1)
            {
                secondlargest = i;
            }
            else if(arr[i] > arr[secondlargest])
            {
                secondlargest = i;
            }
        }
    }
    return secondlargest;
}
int main()
{
    int n, le;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the element of the array : ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    le = sizeof(arr) / sizeof(arr[0]);
    int second_Largest = secondLargest(arr, le);
    if(second_Largest == -1)
    {
        cout<<"Second largest didn't exit";
    }
    else
    {
        cout<<"Second Largest : "<<arr[second_Largest];
    }
}