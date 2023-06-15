#include <iostream>
#include <array>

using namespace std;

void deleteElement(array<int, 10>& a, int index) {
  for (int i = index; i < a.size() - 1; i++) {
    a[i] = a[i + 1];
  }
}

int main() {
  array<int, 10> a = {5, 2, 7, 4, 9, 1, 3, 6, 8, 0};

  cout << "Original array: ";
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  int index = 3;
  deleteElement(a, index);

  cout << "Array after deleting element: ";
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  return 0;
}
