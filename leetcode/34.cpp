#include <bits/stdc++.h>
using namespace std;


class Solution { 
public:
    int findFirst(vector<int>& nums, int target) { 
        int left = 0, right = nums.size() - 1, ans = -1;
        while(left <= right) { 
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) { 
                if (nums[mid] == target) ans = mid;
                right = mid - 1;
            } else { 
                left = mid + 1;
            }
        }
        return ans;
    }

    int findLast(vector<int>& nums, int target) { 
        int left  = 0, right = nums.size() - 1, ans =  -1;
        while(left <= right) { 
            int mid = left + (left + right) / 2;
            if (nums[mid] <= target) { 
                if (nums[mid] == target) ans = mid;
                left = mid + 1;
            } else { 
                right = mid - 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) { 
        return {findFirst(nums, target), findLast(nums, target)};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> nums = {5,7,7,8,8,10};
    int target = 8; 
    Solution sol; 

    vector<int> result = sol.searchRange(nums, target); 
    cout << "First index: " << result[0] << ", Last index: " << result[1] << endl;
    return 0;
}