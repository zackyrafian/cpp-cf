#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {} 
};

Node* reverseLinkedList(Node* head) { 
    Node* prev = nullptr;
    Node* curr = head;

    while (curr) { 
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void append(Node*& head, int val) { 
    Node* newNode = new Node(val);
    if (!head) { 
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) { 
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* head)  {
    while (head) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = nullptr;

    for (int i = 1; i <= 4; i++) {
        int T; cin >> T;
        append(head, T);
    }

    // Node* head = new Node(1);
    // head->next = new Node(2);
    // head->next->next = new Node(3);
    // head->next->next->next = new Node(4);

    cout << "Original List \n";
    printList(head);

    head = reverseLinkedList(head);

    cout << "Reversed List: \n";
    printList(head);

    return 0;
}