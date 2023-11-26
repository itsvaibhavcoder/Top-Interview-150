#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            if (nums[i] == val) {
                nums[i] = nums[j];
                j--;
            } else {
                i++;
            }
        }
        return i;
    }
};

int main() {
    std::vector<int> nums = {3, 2, 2, 3, 4, 5, 3, 6}; // Example nums array
    int val = 3; // Value to be removed

    Solution solution;
    int length = solution.removeElement(nums, val);

    std::cout << "Modified Array: ";
    for (int i = 0; i < length; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
