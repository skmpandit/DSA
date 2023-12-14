#include<bits/stdc++.h>
using namespace std;

int jumpGame(vector<int>& nums) {
    int lastIndexJump = 0, coverage =0, totalJump = 0;
    if(nums.size() == 1) {
        return 0;
    }
    for(int i=0; i<nums.size()-1; i++) {
        coverage = max(coverage, i+nums[i]);
        if(i == lastIndexJump) {
            lastIndexJump = coverage;
            totalJump++;
            if(coverage >= nums.size() -1 ){
                return totalJump;
            }
        }
    }
    return totalJump;
}

int main() {
    vector<int> nums = {2,3,0,1,4};
    int totalJumpResult = jumpGame(nums);
    if(totalJumpResult == 0) {
        cout<<"There is not avlaible jum in the array";
    } else {
        cout<<"The Maximum jump is "<<totalJumpResult<<endl;
    }
}