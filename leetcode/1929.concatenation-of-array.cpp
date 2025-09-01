/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < 2; i++) { 
            for (int j = 0; j < nums.size(); j++) {
                result.push_back(nums[j]);
            }
        }
        return result;
    }
};
// @lc code=end

