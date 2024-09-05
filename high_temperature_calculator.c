#include <stdio.h>
int main() {
  int highTemperature = -100;
  int tempTemperature;
  int highDay;
  printf("Enter the high temperature for 10 consecutive days:\n");
  for (int i = 0; i < 10; i++) {
    printf("Enter the high temperature for day %d: ", i + 1);
    scanf("%d", &tempTemperature);
    if (tempTemperature >= highTemperature) {
      highTemperature = tempTemperature;
      highDay = i;
    }
  }  
  printf("The highest temperature was %d\n degrees", highTemperature);
  printf("%d degrees was last recorded on day %d", highTemperature, highDay);
  
  return 0;
}