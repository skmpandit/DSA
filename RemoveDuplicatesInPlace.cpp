#include<iostream>
#include<vector>
using namespace std;

int removeDeplicate(vector<int>& nums) {
    if(nums.empty()) {
        return 0;
    }
    vector<int> numberCount;
    numberCount.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++) {
        if(nums[i] != nums[i-1]) {
            numberCount.push_back(nums[i]);
        }
    }
    copy(numberCount.begin(), numberCount.end(), nums.begin());
    return numberCount.size();
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int uniqueCount = removeDeplicate(nums);
    cout<<"The Modified Array :\n"<<endl;
    for(int i=0; i < uniqueCount; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<"\nThe number of unique element is "<<uniqueCount;
    return 0;
}