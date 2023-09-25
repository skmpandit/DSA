#include<bits/stdc++.h>
using namespace std;

bool UniqueOfOccurrence(vector<int> arr){
    unordered_map<int, int> mp;
    for(auto &x: arr){
        mp[x]++;
    }
    unordered_set<int> set;
    for(auto &it: mp){
        int freq = it.second;
        set.insert(freq);
    }
    return set.size() == mp.size();
}

int main(){
    int n;
    vector<int> arr;
    cout<<"Enter the size of array: ";
    cin>> n;
    int a = n;
    while(cin>>a)
    {
        arr.push_back(a);
    }
    bool Unique = UniqueOfOccurrence(arr);
    if(Unique == 0){
        cout<<"There is no any occurrence is found";
    }else{
        cout<<"There is found unique number of occurrence";
    }
}