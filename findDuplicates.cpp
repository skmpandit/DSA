#include<bits/stdc++.h>
using namespace std;

vector<int> findDuplicate(vector<int>& nums) {
    vector<int> res;
    unordered_map<int,int> map;
    for(auto i: nums) {
        map[i]++;
    }
    for(auto i: map) {
        if(i.second == 2) {
            res.push_back(i.first);
        }
    }
    return res;
}

int main() {
    vector <int> nums = {4,3,2,7,8,2,3,1};
    vector <int> find = findDuplicate(nums);
    for(auto i : find) {
        cout<<i<<" ";
    }
}