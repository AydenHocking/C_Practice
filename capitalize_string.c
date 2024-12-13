#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void capitalize(char *str);

int main(){
  char the_str[] = "test";
  capitalize(the_str);
  printf("%s\n", the_str);
  char the_str2[] = "This IS a tesT!";
  capitalize(the_str2);
  printf("%s\n", the_str2);
	return 0;
}
void capitalize(char *str){
  for(int i=0;str[i] != '\0';i++){
    if(isalpha(str[i])){
      str[i] = toupper(str[i]);
    }
  }
}