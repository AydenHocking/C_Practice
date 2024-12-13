#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float parse_data(char string[]);
void pretty_print(char item[], int total, float cost);

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s customer_data.txt\n", argv[0]);
    return 1;
  }
  FILE *file = fopen(argv[1], "r");
  if (file == NULL) {
    printf("Unable to open the input file.\n");
    return 1;
  }
  char line[100];
  char item[100];
  int quantity;
  float cost = 0;
  float subtotal = 0;
  float totalCost = 0;
  int totalItems = 0;
  while (fgets(line, sizeof(line), file)) {
    sscanf(line, "%s %d %f", item, &quantity, &cost);
    subtotal = parse_data(line);
    totalCost += subtotal;
    totalItems++;
    pretty_print(item, quantity, cost);
    printf("Subtotal: $%6.2f\n", subtotal);
  }
  printf("-----------------------------------------------------\n");
  printf("Total Items: %-9d Total Cost: $%.2f\n", totalItems, totalCost);
  fclose(file);
  return 0;
}
float parse_data(char string[]) {
  char item[100];
  int quantity;
  float cost;
  sscanf(string, "%s %d %f", item, &quantity, &cost);
  return quantity * cost;
}
void pretty_print(char item[], int total, float cost) {
  printf("Item: %-10s Quantity: %3d  Item Cost: $%5.2f  ", item, total, cost);
}