#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int input1, int input2);
void bitwise(int input1, int input2);

int main() {
  int input1, input2;
  printf("Enter first decimal (base 10) integer: \n");
  if (scanf("%d", &input1) != 1) {
    printf("Please Retry With Positive Integers.");
    return 0;
  }
  printf("Enter second decimal (base 10) integer: \n");
  if (scanf("%d", &input2) != 1) {
    printf("Please Retry With Positive Integers.");
    return 0;
  }
  if (input1 >= 0 && input2 >= 0) {
    printf("\n");
    printf("Decimal: \n %d %d\n", input1, input2);
    printf("Binary:\n");
    if (input1 == 0 && input2 == 0) {
      printf(" 0 0");
    } else if (input2 == 0) {
      decimalToBinary(input1, input2);
      printf("0");
    } else if (input1 == 0) {
      printf(" 0");
      decimalToBinary(input1, input2);
    } else {
      decimalToBinary(input1, input2);
    }
    bitwise(input1, input2);
    return 0;
  } else {
    printf("Please Retry With Positive Integers.");
    return 0;
  }
}
void decimalToBinary(int input1, int input2) {
  printf(" ");

  int size1 = sizeof(input1) * 8;
  int *binary1 = (int *)malloc(size1 * sizeof(int));

  for (int i = 0; i < size1; i++) {
    binary1[size1 - 1 - i] = input1 % 2;
    input1 = input1 / 2;
  }
  int output1 = 0;
  for (int i = 0; i < size1; i++) {
    if (binary1[i] == 1) {
      output1 = 1;
    }
    if (output1) {
      printf("%d", binary1[i]);
    }
  }
  printf(" ");

  int size2 = sizeof(input2) * 8;
  int *binary2 = (int *)malloc(size2 * sizeof(int));

  for (int i = 0; i < size2; i++) {
    binary2[size2 - 1 - i] = input2 % 2;
    input2 = input2 / 2;
  }

  int output2 = 0;
  for (int i = 0; i < size2; i++) {
    if (binary2[i] == 1) {
      output2 = 1;
    }
    if (output2) {
      printf("%d", binary2[i]);
    }
  }
  free(binary1);
  free(binary2);
}

void bitwise(int input1, int input2) {
  printf("\n\n");
  printf("Bitwise:\n");

  printf("AND:\n");
  int and = input1 & input2;
  if (and == 0) {
    printf(" 0");
  } else {
    decimalToBinary(and, 0);
  }
  printf("\nOR:\n");
  int or = input1 | input2;
  if (or == 0) {
    printf(" 0");
  } else {
    decimalToBinary(or, 0);
  }
  printf("\nXOR:\n");
  int xor = input1 ^ input2;
  if (xor == 0) {
    printf(" 0");
  } else {
    decimalToBinary(xor, 0);
  }
}