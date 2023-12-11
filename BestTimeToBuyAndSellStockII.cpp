#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& nums) {
    int profit=0;
    if(nums.size() <= 1) {
        return 0;
    }
    for(int i=0; i<nums.size()-1; i++) {
        if(nums[i+1] > nums[i]) {
            profit += nums[i+1] - nums[i];
        }
    }
    return profit;
}

int main() {
    vector<int> nums = {7,1,5,3,6,4};
    int result = maxProfit(nums);
    cout<<"The Max Profit is "<<result<<endl;
    return 0;
}