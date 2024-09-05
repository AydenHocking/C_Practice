#include <stdio.h>
int main() {
  int x = 2;
  int y = 49;
  printf("First 20 even numbers, in ascending order\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n",x);
    x = x + 2;
  }
  printf("\n");
  printf("Odd numbers between 50 and 20, in descending order\n");
  for (int i = 49; i > 34; i--) {
    printf("%d\n",y);
    y = y - 2;
  }
  return 0;
}