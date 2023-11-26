#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] >= nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (i >= 0) {
            nums1[k--] = nums1[i--];
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    std::vector<int> nums1 = {1, 3, 5, 0, 0, 0}; // Example nums1 array with space for merging
    std::vector<int> nums2 = {2, 4, 6}; // Example nums2 array
    int m = 3; // Number of elements in nums1
    int n = 3; // Number of elements in nums2

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    std::cout << "Merged Array: ";
    for (int num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
