/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};

        int m = matrix.size(); 
        int n = matrix[0].size();

        int top = 0; 
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;

        vector<int>result;

        while (top <= bottom && left <= right) {
            for (int col = left; col <= right; col++) { 
                result.push_back(matrix[top][col]);
            } 
            top++;

            for (int row = top; row <= bottom; row++) {
                result.push_back(matrix[row][right]); 
            }
            right--;

            if (top <= bottom) { 
                for (int col = right; col >= left; col--) {
                    result.push_back(matrix[bottom][col]);
                }
                bottom--;
            }

            if (left <= right) { 
                for (int row = bottom; row >= top; row--) { 
                    result.push_back(matrix[row][left]);
                }
                left++;
            }
        }

        return result;
    }
};
// @lc code=end

