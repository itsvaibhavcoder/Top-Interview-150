#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind = 0;
        for(auto it : nums){
            if(ind < 2 || it > nums[ind - 2]){
                nums[ind++] = it;
            }
        }
        return ind;
    }
};

int main() {
    Solution solution;

    // Example test cases
    vector<int> nums1 = {1, 1, 1, 2, 2, 3};
    int len1 = solution.removeDuplicates(nums1);
    cout << "Length after removing duplicates: " << len1 << endl;
    cout << "Modified array: ";
    for (int i = 0; i < len1; ++i) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    vector<int> nums2 = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    int len2 = solution.removeDuplicates(nums2);
    cout << "Length after removing duplicates: " << len2 << endl;
    cout << "Modified array: ";
    for (int i = 0; i < len2; ++i) {
        cout << nums2[i] << " ";
    }
    cout << endl;

    return 0;
}


