#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) { 
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    return 0;
}