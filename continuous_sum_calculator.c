#include <stdio.h>
int main() {
  int sum = 0;
  int input = 0;
  while (1){
    printf("Current Sum: %d\n",sum);
    printf("Enter the next number: ");
    scanf("%d", &input);
    sum += input;
    if (input == -1) {
      break;
    }
  }
  return 0;
}