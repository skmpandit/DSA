#include<bits/stdc++.h>
using namespace std;

bool checkUniqueFrequncy(int arr[], int n) {
    vector<int> frequncy(n+1);
    for(int i=1; i<=n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[j]==i) {
                frequncy[i-1]++;
            }
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j || frequncy[i] == 0) {
                continue;
            }
            if(frequncy[i]==frequncy[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, le;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the element of Array: ";
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    le = sizeof(arr)/sizeof(arr[0]);
    bool result = checkUniqueFrequncy(arr, le);
    if(result) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
}