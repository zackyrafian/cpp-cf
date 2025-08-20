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
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> nums = {3,4,5,6};
    int target = 7;     

    vector<int> index = twoSum(nums, target);

    for (int i : index) { 
        cout << i << " "; 
    }

    return 0;
}