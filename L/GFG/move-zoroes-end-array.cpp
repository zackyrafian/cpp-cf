#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) { 
    unordered_map<int, int> m; 

    for (int i = 0; i < nums.size(); i++) { 
        int n = nums[i];
        int c = target - n;
        
        if (m.count(c)) { 
            return {m[c], i};
        }
        m[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Index: " << result[0] << " dan " << result[1] << endl;
    } else {
        cout << "Tidak ada pasangan yang cocok.\n";
    }

    return 0;
}