#include<bits/stdc++.h>
using namespace std;

int NonRepeatElement(vector<int> arr) {
    int ans = arr[0];
    for(int i=1; i<arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int a, n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    vector<int> arr;
    for(int i=0; i<n; i++) {
        cin>>a;
        arr.push_back(a);
    }
    int NonRepeat = NonRepeatElement(arr);
    cout<<"The Non-Repeating element is "<<NonRepeat;
}