/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s; 
        for (int x: nums) { 
            s.insert(x);
        }
        int maxLength = 0;
        
        for (int x: nums)  {
            if(s.count(x - 1) == 0) { 
                int curr = x;
                int length = 1;

                while(s.count(curr + 1)) { 
                    curr++;
                    length++;
                }
                maxLength = max(maxLength, length);
            }
        }
        return maxLength;
    }
};
// @lc code=end

