#include <stdio.h>
int main () {
  int sum=0;
  int a[12] = {0, 1, 0, 3, 0, 0, 0, 7, 0, 0, 0, 0};
  printf("Full Array\n");
  for (int i = 0; i < 12; i++){
    printf("%d, ", a[i]);
  }
  printf("\nNon-Zero Values\n");
  for (int i = 0; i < 12; i++){
    
    if (a[i]>0){
      printf("%d, ",a[i]);
    }
  }  
  printf("\nArray Sum\n");
  for (int i = 0; i < 12; i++){
    sum = sum + a[i];
  }
  printf("%d",sum);
  
  return 0;
}