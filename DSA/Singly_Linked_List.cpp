#include <iostream>

using namespace std;

class Node
{
 public:
  int data;
  Node* next;
};

void push(Node** head_ref, int new_data)
{
  Node* new_node = new Node();
  new_node->data = new_data;


  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void printList(Node* head)
{
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  Node* head = NULL;
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);
  cout << "The list is: ";
  printList(head);

  return 0;
}
