/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) { 
            return INT_MAX;
        }

        bool isNegative = (dividend < 0) ^ (divisor < 0);

        long long a = llabs((long long) dividend);
        long long b = llabs((long long) divisor);

        long long result = 0; 
        while(a >= b) { 
            long long temp = b; 
            long long multiple = 1; 

            while(a >= (temp << 1)) { 
                temp = temp << 1;
                multiple = multiple << 1; 
            };

            a = a - temp; 
            result = result + multiple; 
        }

        if (isNegative) { 
            result = -result;
        }

        return result;
    }
};
// @lc code=end

