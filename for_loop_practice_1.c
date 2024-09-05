#include <stdio.h>
int main() {
  int x = 0;
  for (int i = 0; i < 10; i++) {
    printf("x=%d\n",x);
    x = x + 1;
  }

  return 0;
}