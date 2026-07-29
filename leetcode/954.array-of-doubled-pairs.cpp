/*
 * @lc app=leetcode id=954 lang=cpp
 *
 * [954] Array of Doubled Pairs
 */

// @lc code=start
class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        map<int, int> fq; 
        for (auto x: arr) fq[x]++; 
        vector<int> nums; 
        for (auto [x, _]: fq) nums.push_back(x);
        sort(nums.begin(), nums.end(), [](int a, int b) { 
            return abs(a) < abs(b);
        });
        for (auto x: nums) { 
            if (nums == 0) continue;
            if (fq[2 * x] < fq[x]) return false;
            fq[2 * x] -= fq[x]; 
        }

        return true;
    }
};
// @lc code=end

