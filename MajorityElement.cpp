#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0, majorityEle = 0;
    for(int i=0; i<nums.size(); i++) {
        if(count == 0) {
            majorityEle = nums[i];
        }
        if(majorityEle == nums[i]) {
            count++;
        } else {
            count--;
        }
    }
    return majorityEle;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    int Ele = majorityElement(nums);
    cout<<"The Majority Elements is "<<Ele<<endl;
    return 0;
}