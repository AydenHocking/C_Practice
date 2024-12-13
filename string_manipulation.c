#include <stdio.h>
#include <string.h>

void stringManipulation(char *str1, char *str2);

int main() {
  char string1[100] = "???Test1";
  char string2[100] = "??Test2??";

  stringManipulation(string1, string2);

  return 0;
}

void stringManipulation(char *str1, char *str2) {
  printf("Length of string1: %zu\n", strlen(str1));
  printf("Length of string2: %zu\n", strlen(str2));

  char result[100];
  strcpy(result, str1);
  strcat(result, str2);
  printf("Concatenated string1 and string2: %s\n", result);

  int count1 = 0;
  for (const char *ptr = str1; *ptr != '\0'; ptr++) {
    if (*ptr == '?') {
      count1++;
    }
  }
  int count2 = 0;
  for (const char *ptr = str2; *ptr != '\0'; ptr++) {
    if (*ptr == '?') {
      count2++;
    }
  }
  printf("? in string1: %d\n", count1);
  printf("? in string2: %d\n", count2);
    
  if (strcmp(str1, str2) < 0) {
    strcpy(str2, str1);
  } else if (strcmp(str1, str2) > 0) {
    strcpy(str1, str2);
  }
  printf("Compare/Copy:\nstr1: %s\nstr2: %s\n", str1, str2);
}