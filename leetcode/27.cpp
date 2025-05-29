#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2; 
    
    for (int i = 0; i < nums.size(); i++) { 
        if (nums[i] != val) { 
            cout << nums[i];
        }
    }
    
    return 0;
}