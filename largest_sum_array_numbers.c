#include <stdio.h>
#include <stdlib.h>

void foo(int n, int a[n], int *sum, int *largest);

int main(){
  int a[]= {1,2,3,4,5};
  int sum = 0;
  int largest = 0;
  int n = sizeof(a)/sizeof(a[0]);
  foo(n, a, &sum, &largest);
  printf("Sum: %d\n", sum);
  printf("Largest: %d\n", largest);
	return 0;
}
void foo(int n, int a[n], int *sum, int *largest){
  *sum = 0;
  *largest = a[0];
  for(int i = 0; i < n; i++){
    *sum += a[i];
    if(a[i] > *largest){
      *largest = a[i];
    }
  }
}