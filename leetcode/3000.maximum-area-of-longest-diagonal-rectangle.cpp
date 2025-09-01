/*
 * @lc app=leetcode id=3000 lang=cpp
 *
 * [3000] Maximum Area of Longest Diagonal Rectangle
 */

// @lc code=start
class Solution {
public:
  int areaOfMaxDiagonal(vector<vector<int>> &dimensions) {

    long long maxDiag = -1;
    int maxArea = -1;

    for (auto &rect : dimensions) {
      int l = rect[0], w = rect[1];
      long long diag = 1LL * l * l + 1LL * w * w;
      int area = l * w;

      if (diag > maxDiag) {
        maxDiag = diag;
        maxArea = area;
      } else if (diag == maxDiag) {
        maxArea = max(maxArea, area);
      }
    }

    return maxArea;
  }
};
// @lc code=end
