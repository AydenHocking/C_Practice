#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  char name[50];
  int id;
  float grade1;
  float grade2;
  float grade3;
};

void init_student(struct Student *s, const char *name, int id, float g1,
                  float g2, float g3);
float calculate_average(const struct Student *s);
void print_student(const struct Student *s);

int main() {
  int numberOfStudents;
  printf("Enter the number of students: ");
  while (scanf("%d", &numberOfStudents) != 1 || numberOfStudents <= 0) {
    printf("Invalid input. Retry program");
    return 0;
  }
  struct Student *students =
      (struct Student *)malloc(numberOfStudents * sizeof(struct Student));
  if (students == NULL) {
    fprintf(stderr, "Memory Allocation Error. Retry Program\n");
    return 1;
  }
  for (int i = 0; i < numberOfStudents; i++) {
    char name[50];
    int id;
    float g1, g2, g3;
    printf("\nEnter information for student %d:\n", i + 1);
    printf("Name: ");
    scanf("%s", name);
    printf("ID: ");
    while (scanf("%d", &id) != 1 || id <= 0) {
      printf("Invalid input. Retry Program");
      return 0;
    }
    printf("Grade 1: ");
    while (scanf("%f", &g1) != 1 || g1 < 0 || g1 > 100) {
      printf("Invalid input. Retry Program");
      return 0;
    }
    printf("Grade 2: ");
    while (scanf("%f", &g2) != 1 || g2 < 0 || g2 > 100) {
      printf("Invalid input. Retry Program");
      return 0;
    }
    printf("Grade 3: ");
    while (scanf("%f", &g3) != 1 || g3 < 0 || g3 > 100) {
      printf("Invalid input. Retry Program");
      return 0;
    }
    init_student(&students[i], name, id, g1, g2, g3);
  }
  printf("\n\nStudent Information:\n");
  printf("---------------------\n");
  for (int i = 0; i < numberOfStudents; i++) {
    print_student(&students[i]);
  }

  free(students);
  return 0;
}
void init_student(struct Student *s, const char *name, int id, float g1,
                  float g2, float g3) {
  strcpy(s->name, name);
  s->id = id;
  s->grade1 = g1;
  s->grade2 = g2;
  s->grade3 = g3;
}
float calculate_average(const struct Student *s) {
  float average = (s->grade1 + s->grade2 + s->grade3) / 3;
  return average;
}

void print_student(const struct Student *s) {
  printf("Name: %s\n", s->name);
  printf("ID: %d\n", s->id);
  printf("Average Grade: %.2f\n", calculate_average(s));
}