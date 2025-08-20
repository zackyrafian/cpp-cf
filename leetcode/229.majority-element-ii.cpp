/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq; 

        for (int x: nums) {
            freq[x]++; 
        }

        vector<int> r; 

        for (auto it: freq) { 
            if (it.second > n / 3) { 
                r.push_back(it.first);
            }
        }
        return r;
    }
};
// @lc code=end

