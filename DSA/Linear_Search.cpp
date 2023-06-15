#include <iostream>
#include <array>

using namespace std;

int linearSearch(array<int, 10>& a, int target) {
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  array<int, 10> a = {5, 2, 7, 4, 9, 1, 3, 6, 8, 0};
  int target = 7;
  int index = linearSearch(a, target);

  if (index != -1) {
    cout << "The Elements was found at index: " << index << endl;
  } else {
    cout << "The Elements was not found in the array" << endl;
  }

  return 0;
}
