#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int i = 0;
        for(int j = 1; j < nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return (i + 1);
    }
};

int main() {
    Solution solution;

    // Example test cases
    vector<int> nums1 = {1, 1, 2};
    int len1 = solution.removeDuplicates(nums1);
    cout << "Length after removing duplicates: " << len1 << endl;
    cout << "Modified array: ";
    for (int i = 0; i < len1; ++i) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int len2 = solution.removeDuplicates(nums2);
    cout << "Length after removing duplicates: " << len2;

}