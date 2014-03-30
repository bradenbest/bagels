#include <stdio.h>

#include "version.h"

static const version v = {
  0, // Major
  2, // Minor
  0  // Patch
};

void get_version(){
  printf("Version %i.%i", v.major, v.minor);
  if(v.patch){
    printf(".%i", v.patch);
  }
  printf("\n");
}
