/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int j = 0, f = 0, c = 0;

        for (int i = 0; nums.size() - 1; ++i) { 
            f = max(f, i + nums[i]);
            
            if (i == c) { 
                j++;
                c = f; 
            }
        }
        return j;
    }
};
// @lc code=end

