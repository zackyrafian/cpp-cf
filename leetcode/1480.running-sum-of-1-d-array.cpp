/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result; 
        int r = 0; 
        for (int i = 0; i < nums.size(); i++) { 
            r += nums[i];
            result.push_back(r);
        }
        return result;
    }
};
// @lc code=end

