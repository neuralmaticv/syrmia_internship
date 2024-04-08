#include <iostream>

int main() {
  int *p = new int[10];
  std::cout << p[0];

  // delete [] p;

  return 0;
}