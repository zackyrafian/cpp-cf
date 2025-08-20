/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void solve(vector<int>& candidates, int target, int index,
        vector<int>& currentCombo, vector<vector<int>>& result)  { 

        if (target == 0) {
        result.push_back(currentCombo); 
        return;
    }

        if (target < 0) { 
            return;
        }

        for (int i = index; i < candidates.size(); i++) { 
            currentCombo.push_back(candidates[i]);
            solve(candidates, target - candidates[i], i, currentCombo, result);
            currentCombo.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;   
        vector<int> currentCombo; 

        solve(candidates, target, 0, currentCombo, result);
        return result;
    }
};
// @lc code=end

