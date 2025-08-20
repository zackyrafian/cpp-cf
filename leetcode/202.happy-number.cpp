/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {

    unordered_set<int> seen; 

    while (n != 1) { 
        if(seen.count(n)) {
            return false;
        }
        seen.insert(n); 

        int sum = 0; 
        while(n > 0) { 
            int digit = n % 10; 
            sum += digit * digit; 
            n = n / 10;
        }
        n = sum; 
    }

    return true;
    }
};
// @lc code=end

