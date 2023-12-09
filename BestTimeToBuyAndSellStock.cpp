#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& nums) {
    int res=0;
    int min = nums[0];
    if(res == 0 && nums.size() <= 1) {
        return 0;
    }
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] > min) {
            res = max(res, nums[i]-min);
        }
        else {
            min = nums[i];
        }
    }
    return res;
}

int main() {
    vector<int> nums = {7,1,5,3,6,4};
    int result = maxProfit(nums);
    cout<<"The Max Profit is "<<result<<endl;
    return 0; 
}