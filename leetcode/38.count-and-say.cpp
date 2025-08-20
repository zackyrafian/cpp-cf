/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) { 
            return "1"; 
        }

        string result = "1"; 

        for (int i = 2; i <= n; i++) { 
            string current = ""; 
            int count = 1; 
            int len = result.length(); 

            for (int j = 1; j < len; j++) { 
                if (result[j] == result[j - 1]) { 
                    count++;
                } else { 
                    current += to_string(count) + result[j - 1]; 
                    count = 1;
                }
            }

            current += to_string(count) + result[len - 1]; 
            result = current;
        }

        return result;
    }
};
// @lc code=end

