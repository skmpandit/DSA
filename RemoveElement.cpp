#include <iostream>
#include <vector>

int removeElementBruteForce(std::vector<int>& nums, int val) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {3, 2, 2, 3, 4, 5, 3, 6};
    int val = 3;
    int k = removeElementBruteForce(nums, val);

    std::cout << "Updated nums: ";
    for (int i = 0; i < k; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << "\nNumber of elements not equal to val: " << k << std::endl;

    return 0;
}