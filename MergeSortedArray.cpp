#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> merged(m+n);
    int p1=0, p2=0, p=0;
    while (p1<m && p2<n){
        if(nums1[p1]<nums2[p2]) {
            merged[p++] = nums1[p1++];
        } else {
            merged[p++] = nums2[p2++];
        }
    }
    while (p1<m){
            merged[p++] = nums1[p1++];
        }
    while (p2<n){
            merged[p++] = nums2[p2++];
        }
    nums1 = merged;
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    merge(nums1, m, nums2, n);
    for(int num: nums1) {
        cout<<num<<" ";
    }
    return 0;
}