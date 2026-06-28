#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>& nums, vector<int>& curr, vector<bool>& used) {
  int n = nums.size();
  if (curr.size() == nums.size()) { 
    for(int x: curr) { 
      cout << x << ' '; 
    }
    cout << '\n'; 
    return;
  }

  for (int i = 0; i < nums.size(); i++) { 
    if (used[i]) continue; 

    used[i] = true;
    curr.push_back(nums[i]);
    solve(nums, curr, used); 
    curr.pop_back();
    used[i] = false;
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {1, 2, 3};
    vector<int> current;
    vector<bool> used(nums.size(), false);

    solve(nums, current, used);

    return 0;
}