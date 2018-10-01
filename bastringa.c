#include <stdlib.h>
#include <stdio.h>
#include "bastr.h"
int main(){
  unsigned char g[15] = "lost my ";
  unsigned char j[15] = "marbles";
  strcat(g,j);
  printf("%s\n", g);
  return 0;
}
