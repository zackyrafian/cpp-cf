#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> result;
    vector<int> x;
    vector<int> y; 

    for (int i = 0; i < nums.size() - n; i++) { 
      x.push_back(nums[i]);
    }

    for (int i = nums.size() - 1; i >= n; i--) { 
      y.push_back(nums[i]);
    }

    reverse(y.begin(), y.end());

    for (int i = 0 ; i < 3; i++)  { 
      // cout << x[i] << " " << y[i];
      result.push_back(x[i]);
      result.push_back(y[i]);

    }

    for (int g: result) { 
      cout << g;
    }

    return 0;
}