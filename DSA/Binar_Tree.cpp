#include <iostream>
using namespace std;
struct Node {
  int data;
  Node *left;
  Node *right;
};

class Tree {
 public:
  Tree() : root(nullptr) {}
  void insert(int data);
  void inorderTraversal();
  Node* search(int data);

 private:
  Node *root;
  void insert(int data, Node *node);
  void inorderTraversal(Node *node);
  Node* search(int data, Node *node);
};

void Tree::insert(int data) {
  if (root == nullptr) {
    root = new Node();
    root->data = data;
    root->left = nullptr;
    root->right = nullptr;
  } else {
    insert(data, root);
  }
}

void Tree::insert(int data, Node *node) {
  if (data < node->data) {
    if (node->left != nullptr) {
      insert(data, node->left);
    } else {
      node->left = new Node();
      node->left->data = data;
      node->left->left = nullptr;
      node->left->right = nullptr;
    }
  } else {
    if (node->right != nullptr) {
      insert(data, node->right);
    } else
    {
      node->right = new Node();
      node->right->data = data;
      node->right->left = nullptr;
      node->right->right = nullptr;
    }
  }

}

void Tree::inorderTraversal() {
  inorderTraversal(root);
}

void Tree::inorderTraversal(Node *node) {
  if (node == nullptr) {
    return;
  }

  inorderTraversal(node->left);
  cout << node->data << " ";
  inorderTraversal(node->right);
}

Node* Tree::search(int data) {
  return search(data, root);
}

Node* Tree::search(int data, Node *node) {
  if (node == nullptr) {
    return nullptr;
  }

  if (node->data == data) {
    return node;
  }

  if (data < node->data) {
    return search(data, node->left);
  } else {
    return search(data, node->right);
  }
}

int main() {
  Tree tree;
  tree.insert(5);
  tree.insert(3);
  tree.insert(7);
  tree.insert(1);
  tree.insert(4);
  tree.insert(6);
  tree.insert(9);

  cout << "In-order traversal: ";
  tree.inorderTraversal();
  cout << endl;

  int data = 4;
  Node *node = tree.search(data);
  if (node != nullptr) {
    cout << "Node with value " << data << " found." << std
  }
}