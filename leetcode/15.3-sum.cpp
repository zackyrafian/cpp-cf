#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> nums = {1,2,3,1}; 

    int d = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) { 
        if (nums[i] == nums[i + 1]) { 
            d++;
            }
        }

        cout << d;

    return 0;
}