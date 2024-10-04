/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int a = 0; a < nums.size(); a++){
            for (int b = a + 1; b < nums.size(); b++){
                if (nums[a] + nums[b] == target){
                    return {a, b};
                }
            }
        }
        return {};
    }
};
// @lc code=end

