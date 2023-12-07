#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int n = nums.size();
        int major = nums[0];
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] == major)
                cnt++;
            else {
                cnt--;
                if (cnt == 0) {
                    major = nums[i];
                    cnt = 1;
                }
            }
        }
        return major;
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<int> numbers = {2, 2, 1, 1, 1, 2, 2};
    int majority = solution.majorityElement(numbers);
    
    cout << "The majority element is: " << majority << std::endl;
    
    return 0;
}
