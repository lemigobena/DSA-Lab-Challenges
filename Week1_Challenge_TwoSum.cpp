// The solution is Programmed on Leetcode directly with the questions specifications.
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            // Loop through each element
            for (int i = 0; i < nums.size(); i++) {
                // Check every element after it
                for (int j = i + 1; j < nums.size(); j++) {
                    // If the sum matches the target, return their indices
                    if (nums[i] + nums[j] == target) {
                        return {i, j};
                    }
                }
            
            }
            // If no solution is found, return an empty vector
            return {};
        }
    };
    