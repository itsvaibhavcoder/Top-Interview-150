#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }
        nums = temp;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    
    cout << "Original array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << std::endl;
    
    solution.rotate(numbers, k);
    
    cout << "Array after rotating by " << k << " elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << std::endl;
    
    return 0;
}
