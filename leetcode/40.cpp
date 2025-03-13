#include <bits/stdc++.h>
using namespace std;

class Solution { 
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& candidates, int target, vector<int>& temp, int start) { 
        if (target == 0) { 
            result.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) { 
            if (i > start && candidates[i] == candidates[i - 1]) continue;

            if (candidates[i] > target) break;

            temp.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], temp, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combanationSum2(vector<int> candidates, int target) { 
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        backtrack(candidates, target, temp, 0);
        return result;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;

    Solution sol;
    vector<vector<int>> ans = sol.combanationSum2(candidates, target);
    
    for (auto& comb : ans) { 
        cout << "[ ";
        for (int num : comb) cout << num << " ";
        cout << "]";
    }
    return 0;
}
