#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* createNode(int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->next = nullptr;
  return newNode;
}

int main() {
  Node* head = createNode(1);
  head->next = createNode(2);
  head->next->next = createNode(3);
  head->next->next->next = createNode(4);

  Node* curr = head;
  while (curr != nullptr) {
    cout << curr->data << " ";
    curr = curr->next;
  }
  cout << endl;

  return 0;
}
