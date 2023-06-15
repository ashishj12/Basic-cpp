#include <iostream>
#include <array>

using namespace std;

int main() {
  array<int, 10> a = {5, 2, 7, 4, 9, 1, 3, 6, 8, 0};

  cout << "Array elements: ";
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
