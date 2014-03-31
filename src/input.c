#include <stdio.h>

#include "input.h"

char get_input(){
  char c = getc(stdin);
  fflush(stdin);
  if(c == 10 || c == 0){
    return get_input();
  }else{
    return c;
  }
}

void get_num_input(char *str){
  str[0] = get_input() - '0';
  str[1] = get_input() - '0';
  str[2] = get_input() - '0';
  if(str[0] == str[1] || str[1] == str[2] || str[2] == str[0]){
    get_num_input(str);
  }
}
