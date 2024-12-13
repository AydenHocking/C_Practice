#include <stdio.h>
#include <stdlib.h>

void numToArray(int n);
void numToWord(int n);
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  numToWord(n);
  numToArray(n);
  return 0;
}
void numToArray(int n) {
  int arr[10];
  int i = 0;
  while (n > 0) {
    arr[i] = n % 10;
    n = n / 10;
    i++;
  }
}
void numToWord(int n) {
  const char *ones[] = {"Zero", "One", "Two",   "Three", "Four",
                        "Five", "Six", "Seven", "Eight", "Nine"};
  char *teens[] = {"Eleven",  "Twelve",    "Thirteen", "Fourteen", "Fifteen",
                   "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
  char *tens[] = {"Twenty", "Thirty",  "Forty",  "Fifty",
                  "Sixty",  "Seventy", "Eighty", "Ninety"};
  if (n <= 0) {
    printf("Negative ");
  }
  if (n >= 1000000000 || n <= -1000000000) {
    printf("One Billion ");
  }
  if (n >)
  for (int i = 0; i < 10; i++) {
    if (i == n) {
      printf("%s", ones[i]);
      break;
    }
  }
}