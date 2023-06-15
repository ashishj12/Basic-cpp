#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
};

Node* createNode(int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->left = nullptr;
  newNode->right = nullptr;
  return newNode;
}

int main() {
  Node* root = createNode(1);
  root->left = createNode(2);
  root->right = createNode(3);
  root->left->left = createNode(4);
  root->left->right = createNode(5);

  cout << "Root node is: " << root->data << endl;
  cout << "Left child is: " << root->left->data << endl;
  cout << "Right child is: " << root->right->data << endl;

  return 0;
}
