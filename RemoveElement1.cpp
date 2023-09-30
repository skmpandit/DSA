#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i =0, j =0;
    while(i < nums.size()) {
        if(nums[i] != val) {
            nums[j] = nums[i];
            j += 1;
        }
        i += 1;
    }
    return j;
}

int main() {
    vector<int> nums = {5,5,1,5,6,4,3,7,8};
    int val = 5;
    int k = removeElement(nums, val);
    cout<<"Updated Number: ";
    for(int i=0; i<k; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<"\nNumber of elments not equal to val: "<<k<<endl;
    return 0;
}