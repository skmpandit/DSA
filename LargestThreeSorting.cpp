#include<bits/stdc++.h>
using namespace std;
void find3largest(int arr[], int n)
{
    sort(arr, arr + n);
    int check = 0, count = 1;
    cout<<"The largest number is : \n";
    for(int i=1; i<=n; i++) 
    {
        if(count < 4)
        {
            if(check != arr[n-i])
            {
                cout<<arr[n-i]<<" ";
                check=arr[n-i];
                count++;
            }
        }
        else
            break;
    }
}
int main()
{
    int n,le;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    le = sizeof(arr)/sizeof(arr[0]);
    find3largest(arr,le);
    return 0;
}