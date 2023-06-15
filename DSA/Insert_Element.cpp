#include <iostream>
#include <array>

using namespace std;

void insertElement(array<int, 10>& a, int index, int element) {
  for (int i = a.size() - 1; i > index; i--) {
    a[i] = a[i - 1];
  }
  a[index] = element;
}

int main() {  
  array<int, 10> a = {5, 2, 7, 4, 9, 1, 3, 6, 8, 0};

  cout << "Original array: ";
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  int index = 3;
  int element = 10;
  insertElement(a, index, element);
  cout << "Array after inserting element: "<<insertElement<<endl;
  for (int i = 0; i < a.size(); i)

return 0;
}
