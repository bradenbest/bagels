#include <stdio.h>

#include "version.h"

static const version v = {
  1, // Major
  0, // Minor
  2  // Patch
};

void get_version(){
  printf("Version %i.%i", v.major, v.minor);
  if(v.patch){
    printf(".%i", v.patch);
  }
  printf("\n");
}
