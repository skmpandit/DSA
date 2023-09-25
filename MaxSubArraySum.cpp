#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int MaxSubArraySum(int arr[], int size) {
    int max_so_far = arr[0];
    int curr_max = arr[0];
    for(int i=1; i<size; i++) {
        curr_max = max(arr[i], arr[i]+curr_max);
        max_so_far = max(curr_max, max_so_far);
    }
    return max_so_far;
}
int main() {
    int n, le;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    le = sizeof(arr) / sizeof(arr[0]);
    cout<<"The maximun sub-array sum is "<<MaxSubArraySum(arr, le);
}