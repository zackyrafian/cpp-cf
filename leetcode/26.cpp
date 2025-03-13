#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; 
        
        int slow = 0; 
        
        for (int fast = 1; fast < nums.size(); fast++) {
            if (nums[fast] != nums[slow]) { 
                slow++; 
                nums[slow] = nums[fast]; 
            }
        }
        
        return slow + 1; 
    }
};

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    
    Solution sol;
    int k = sol.removeDuplicates(nums);
    
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
