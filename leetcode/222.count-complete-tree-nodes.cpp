/*
 * @lc app=leetcode id=222 lang=cpp
 *
 * [222] Count Complete Tree Nodes
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  int countNodes(TreeNode *root) {
    if (!root)
      return 0;

    int h = 0;
    TreeNode *node = root;
    while (node->left) {
      h++;
      node = node->left;
    }

    int left = 0, right = (1 << h) - 1;
    int lastCount = 0;

    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (exists(mid, h, root)) {
        lastCount = mid + 1;
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }

    return (1 << h) - 1 + lastCount;
  }

  bool exists(int idx, int h, TreeNode *node) {
    int left = 0, right = (1 << h) - 1;

    for (int i = 0; i < h; i++) {
      int mid = (left + right) / 2;
      if (idx <= mid) {
        node = node->left;
        right = mid;
      } else {
        node = node->right;
        left = mid + 1;
      }

      if (!node)
        return false;
    }
    return node != nullptr;
  }
};
// @lc code=end
