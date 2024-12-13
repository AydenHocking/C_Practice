#include <stdio.h>
#include <stdlib.h>

char *concatenate(const char *string1, const char *string2);

int main(int argc, const char *argv[]) {

  char str1[] = "The United States";
  char str2[] = "of America";
  printf("First string: %s\n", str1);
  printf("Second string: %s\n", str2);
  char *str3 = concatenate(str1, str2);

  if (str3 != NULL) {
    printf("\nThe two strings concatenated: %s\n", str3);
    free(str3);
  } else {
    printf("\nError concatenating strings.\n");
  }

  char str4[] = "The University of North Carolina";
  char str5[] = "at Charlotte";

  printf("\nFirst string: %s\n", str4);
  printf("Second string: %s\n", str5);
  char *str6 = concatenate(str4, str5);

  if (str6 != NULL) {
    printf("\nThe two strings concatenated: %s\n", str6);
    free(str6); 
  } else {
    printf("\nError concatenating strings.\n");
  }

  return 0;
}

char *concatenate(const char *string1, const char *string2) {
  int length1 = 0, length2 = 0;

  const char *ptr = string1;
  while (*ptr != '\0') {
    length1++;
    ptr++;
  }

  ptr = string2;
  while (*ptr != '\0') {
    length2++;
    ptr++;
  }

  char *twostrings = (char *)malloc(length1 + length2+2);
  if (twostrings == NULL) {
    printf("\nError in memory allocation.\n");
    return NULL;
  }

  char *two_ptr = twostrings;

  while (*string1 != '\0') {
    *two_ptr = *string1;
    two_ptr++;
    string1++;
  }

  *two_ptr = ' ';
  two_ptr++;

  while (*string2 != '\0') {
    *two_ptr = *string2;
    two_ptr++;
    string2++;
  }
  *two_ptr = '\0'; 
  return twostrings;
}