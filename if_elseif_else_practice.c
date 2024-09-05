#include <stdio.h>
int main() {
  int grade1;

  printf("Please enter the numeric grade:\n");
  scanf("%d", &grade1);
  if(grade1 >= 90) {
    printf("%d is a letter grade A\n",grade1);
  }
  else if (grade1 >= 80) {
    printf("%d is a letter grade B\n",grade1);
  }
  else if (grade1 >= 70) {
    printf("%d is a letter grade C\n",grade1);
  }
  else if (grade1 >= 60) {
    printf("%d is a letter grade D\n",grade1);
  }
  else if (grade1 <=59 && grade1 >=0) {
    printf("%d is a letter grade F\n",grade1);
  }
  else{
    printf("%d is an invalid grade\n",grade1);
  }

  
return 0;
}