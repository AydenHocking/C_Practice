#include "stdio.h"
int main(void) {
  int var = 0;
  int *pointer;
  pointer = &var;
  *pointer = 100;
  printf("var = %d\n", var);
  printf("pointer = %d\n", *pointer);

  float variable2 = 0;
  float *pointer2;
  pointer2 = &variable2;
  *pointer2 = 3.1416;
  printf("variable2 = %.4f\n", variable2);
  printf("pointer2 = %.4f\n", *pointer2);
  return 0;
}
