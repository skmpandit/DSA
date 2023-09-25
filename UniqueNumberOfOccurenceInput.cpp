#include<bits/stdc++.h>
using namespace std;

bool UniqueOccurrence(vector<int> arr)
{
    unordered_map<int, int> mp;
    for(auto &x:arr)
    {
        mp[x]++;
    }
    unordered_set<int> set;
    for(auto &it: mp)
    {
        int freq = it.second;
        set.insert(freq);
    }
    return set.size() == mp.size();
}

int main()
{
    int n,a;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of the array: ";
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    bool Unique = UniqueOccurrence(arr);
    if(Unique == 0)
    {
        cout<<"Unique number of occurrence is not found";
    }
    else
    {
        cout<<"Unique number of occurrence is found";
    }
}