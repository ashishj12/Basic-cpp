#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;

  // Enqueue elements onto the queue
  q.push(5);
  q.push(3);
  q.push(1);

  // Print the size of the queue
  cout << "Queue size: " << q.size() << endl;

  // Dequeue elements from the queue
  cout << "Dequeued element: " << q.front() << endl;
  q.pop();
  cout << "Dequeued element: " << q.front() << endl;
  q.pop();
  cout << "Dequeued element: " << q.front() << endl;
  q.pop();

  // Print the size of the queue after dequeuing all elements
  cout << "Queue size: " << q.size() << endl;

  return 0;
}
