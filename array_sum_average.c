#include <stdio.h>
int main(){
  float sum = 0;
  float average = 0;
  float a[5];
  for(int i=0;i<5;i++){
    printf("Enter A Number:\n");
    scanf("%f",&a[i]);
  }
  printf("Full Array\n");
  for(int i=0;i<5;i++){
    printf("%.2f, ",a[i]);
  }
  for(int i=0;i<5;i++){
    sum = sum + a[i];
  }
  printf("\nSum = %.2f\n",sum);
  for(int i=0;i<5;i++){
    average = sum/5;
  }
  printf("Average = %.2f\n",average);
  return 0;
    
}