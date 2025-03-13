#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoList(ListNode* l1, ListNode* l2) { 
    ListNode* dummy = new ListNode(0); 
    ListNode* temp = dummy;

    while (l1 && l2 ) { 
        if (l1->val < l2->val) { 
            temp->next = l1;
            l1 = l1->next; 
        } else { 
            temp->next = l2;
            l2 = l2->next;
        }

        temp = temp->next;
    }

    if (l1) temp->next = l1;
    if (l2) temp->next = l2;

    return dummy->next;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    return 0;
}