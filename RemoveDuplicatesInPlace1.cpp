#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector<int>& nums) {
    if(nums.empty()) {
        return 0;
    }
    int k = 1;
    for(int i=1; i<nums.size(); i++) {
        if(nums[i] != nums[i-1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4,5,5,6,9};
    int modifiedNums = removeDuplicate(nums);
    cout<<"The Modified Array : \n";
    for(int i=0; i<modifiedNums; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<"\nThe unique number of element of "<<modifiedNums;
    return 0;
}