#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrence(vector<int>& arr)
{
    unordered_map<int, int> mp;
    //store frequency of each numbers
    for(int &x: arr) {
        mp[x]++;
    }
    unordered_set<int> st;
    for(auto &it: mp) {
        int freq = it.second; //it.first = number
        if(st.find(freq) != st.end()) {
            return false;
        }
        st.insert(freq);
    }
    return true;
}

int main() {
    vector <int> arr = {1,2,2,1,3,1};
    bool uni = uniqueOccurrence(arr);
    if(uni == 0) 
    {
        cout<<"The unique number of occurence is not present";
    }
    else 
    {
        cout<<"The unique number of occurence is present";
    }
}