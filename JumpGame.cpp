#include<bits/stdc++.h>
using namespace std;

bool jump(vector<int>& nums) {
    int finalPosition = nums.size()-1;
    for(int i=nums.size()-2; i>=0; i--) {
        if(i+nums[i] >= finalPosition) {
            finalPosition = i;
        }
    }
    return finalPosition == 0;
}

int main() {
    vector<int> nums = {3,2,1,0,4};
    bool result = jump(nums);
    if(result == 0) {
        cout<<"False";
    }else {
        cout<<"True";
    }
}