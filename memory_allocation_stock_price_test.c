#include <stdio.h>
#include <stdlib.h>
int main(void) {
  float *stock_prices = (float*)malloc(sizeof(float) * 500);
  if (stock_prices == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    exit(1);
  }
  *(stock_prices + 0) = 10.01;
  *(stock_prices + 1) = 20.02;
  *(stock_prices + 2) = 30.03;
  *(stock_prices + 3) = 40.04;
  *(stock_prices + 4) = 50.05;
  for (int i = 0; i < 5; i++) {
    printf("%d: %.2f\n", i, *(stock_prices + i)); 
  }

  
  free(stock_prices);
  stock_prices = NULL;
  return 0;
}
