#include <stdio.h>

float volume; 
float cube_volume(float);

int main(){
  float side;
  printf("Enter the side of the cube: ");
  scanf( "%f", &side);
  cube_volume(side); 
  printf("Volume = %.2f * %.2f * %.2f = %.2f\n",side,side,side,volume);
  return 0;
}
float cube_volume(float side) {
  volume = side * side * side; 
  return volume;
}
