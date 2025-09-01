/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode *rotateRight(ListNode *head, int k) {

    if (!head || !head->next || k == 0)
      return head;

    int len = 1;
    ListNode *tail = head;
    while (tail->next) {
      tail = tail->next;
      len++;
    }

    tail->next = head;

    k = k % len;
    int s = len - k;
    ListNode *nT = tail;
    while (s--) {
      nT = nT->next;
    }

    ListNode *nH = nT->next;
    nT->next = nullptr;

    return nH;
  }
};
// @lc code=end
