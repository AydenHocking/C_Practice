#include <stdio.h>
int main () {
  int income;
  float tax;
  int dependent = 0;
  int credit; 
  printf("Enter your income:");
  scanf("%d", &income);
  if (income >= 0 && income <= 9275){
    tax = income * 0.12;
  }else if (income >= 9276 && income <= 37650){
    tax = income * 0.17;
  }else if (income >= 37651 && income <= 91150){
    tax = income * 0.27;
  }else if (income >= 91151 && income <= 190150){
    tax = income * 0.30;
  }else if (income >= 190151){
    tax = income * 0.35;
  }else {
    printf("Invalid income, please restart\n");
    return 0;
  }
  printf("Tax due: $%.2f\n", tax);
  printf( "Enter the number of dependents (0 for none):");
  scanf("%d", &dependent);
  if (dependent >= 0 && dependent <= 5){  
    credit = 450 * dependent;
  }else if(dependent >= 6){
    credit = 2250;
  }else{
    credit = 0;
    printf("%d is an invalid number of dependents (Entered as 0)\n", dependent);
  }

  printf("Tax credit: $%d\n", credit);
  printf("Adjusted tax: $%.2f\n", tax - credit);

  return 0;
}