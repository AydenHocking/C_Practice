#include <stdio.h>
int main () {
  float radius;
  float height;
  float volume;
  printf("Enter the radius of the cylinder:\n");
  scanf("%f", &radius);
  printf("Enter the height of the cylinder:\n");
  scanf("%f", &height);
  volume = 3.141592 * radius * radius * height;
  printf("The volume of the cylinder is pi * %f * %f * %f = %.02f\n" , radius, radius, height, volume);
  return 0;
}