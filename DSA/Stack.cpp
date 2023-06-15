#include <iostream>
#include<stack>

using namespace std;

int main() {
  stack<int> s;

  // Push elements 
  s.push(5);
  s.push(3);
  s.push(1);

  // Print the size 
  cout << "Stack size: " << s.size() << endl;

  // Pop elements 
  cout << "Popped element: " << s.top() << endl;
  s.pop();
  cout << "Popped element: " << s.top() << endl;
  s.pop();
  cout << "Popped element: " << s.top() << endl;
  s.pop();

  
  cout << "Stack size: " << s.size() << endl;

  return 0;
}
