#include <bits/stdc++.h>
using namespace std;

struct ListNode 
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { 
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy; 
    int carry = 0; 

    while (l1 || l2 || carry) { 
        int sum = carry;
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) { 
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
    }
    return dummy->next;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    return 0;
}