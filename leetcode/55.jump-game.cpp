/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int r = 0; 
        int n = nums.size();

        for (int i = 0; i < nums.size(); i++) { 
            if (i > r) { 
                return false; 
            }

            r = max(r, i + nums[i]);

            if (r >= n - 1) { 
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

