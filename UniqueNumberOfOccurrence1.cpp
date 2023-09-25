#include<bits/stdc++.h>
using namespace std;

bool UniqueOccurrence(vector<int>& arr)
{
    unordered_map<int, int> mp;
    for(auto &x: arr)
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
    vector <int> arr = {1, 3, 5, 3, 5, 3, 1, 5, 3};
    bool unique = UniqueOccurrence(arr);
    if(unique == 0) {
        cout<<"Unique Occurrence is not found";
    }else {
        cout<<"Unique Occurrence is found";
    }
}