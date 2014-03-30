#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "version.h"
#include "bagels.h"

static const char *INTRO = "Welcome to bagels. I have 3 numbers in mind. Think you can guess them?\n";

int main(){
  srand(time(0));
  player p = {0,0,1,0};

  printf("%s", INTRO);
  get_version();

  while(p.playing){
    bagels(&p);
    //ask if player wants to quit
  }
  return 0;
}
