#include<bits/stdc++.h>
using namespace std;

vector<int> FindDesappearedNumber(vector<int>& nums) {
    vector<int> ans;
    for(int num: nums) {
        int index = abs(num) - 1;
        nums[index] = -abs(nums[index]);
    }
    for(int i =0; i < nums.size(); ++i) {
        if(nums[i] > 0) {
            ans.push_back(i+1);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> Duplicate = FindDesappearedNumber(nums);
    for(auto i: Duplicate) {
        cout<<i<<" ";
    }
}