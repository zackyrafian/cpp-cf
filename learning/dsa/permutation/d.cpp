#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>& nums, vector<int>& curr, vector<int>& used) {
  int n = nums.size(); 
  if (curr.size() == nums.size()) { 
    // for(int i: curr) { 
    //   cout << i << ' ';
    // }
    // cout << endl; 
    return; 
  }

  for (int i = 0; i < n; i++) { 
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
    vector<int> a = {1,2,3}; 
    vector<int> curr; 
    vector<int> used(a.size(), false); 

    solve(a, curr, used);
    
    return 0;
}