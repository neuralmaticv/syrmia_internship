#include <cstddef>

int main() {
  int *p = NULL;
  {
    int x = 0;
    p = &x;
  }
  *p = 5;
  return 0;
}