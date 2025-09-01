#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int val) {
    data = val;
    next = nullptr;
  }
};

void insertEnd(Node *&head, int val) {
  Node *newNode = new Node(val);

  if (head == nullptr) {
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }

  temp->next = newNode;
}

void printList(Node *head) {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  Node *head = nullptr;

  vector<int> arr = {10, 20, 30, 40, 50};

  for (int i = 0; i < arr.size(); i++) {
    insertEnd(head, arr[i]);
  }

  printList(head);
  return 0;
}