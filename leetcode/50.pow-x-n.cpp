/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; 
        if (N < 0) { 
            x = 1 / x;
            N = -N;
        }

        double r = 1; 
        while (N > 0) { 
            if (N % 2 == 1) { 
                r *= x;
            }
            x *= x;
            N /= 2;
        }
        return r;
    }
};
// @lc code=end

