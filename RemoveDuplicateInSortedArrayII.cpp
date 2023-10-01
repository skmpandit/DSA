#include<iostream>
#include<vector>
using namespace std;

int removeDuplicateII(vector<int>& nums) {
    int n = nums.size();
    if(n <= 2) {
        return n;
    }
    int slow = 2;
    for(int fast=2; fast<n; fast++) {
        if(nums[fast] != nums[slow-2]) {
            nums[slow] = nums[fast];
            slow++;
        }
    }
    return slow;
}

int main() {
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int modifiedNums = removeDuplicateII(nums);
    cout<<"The modified Array: \n";
    for(int i=0; i<modifiedNums; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<"\nThe Unique Number of element is "<<modifiedNums;
    return 0;
}