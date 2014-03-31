#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "input.h"
#include "version.h"
#include "bagels.h"

static const char *INTRO = "Welcome to bagels. I have 3 numbers in mind. Think you can guess them?\n";

int main(){
  srand(time(0));
  player p = {0,0,0};

  printf("%s", INTRO);
  get_version();

  while(1){
    bagels(&p);
    printf("\r\033[KDo you want to play again? [y/n] ");
    if(get_input() != 'y'){
      break;
    }
  }
  return 0;
}
