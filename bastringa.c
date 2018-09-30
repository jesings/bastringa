#include <stdlib.h>
#include <stdio.h>
#include "bastr.h"
int main(){
  unsigned char j[15] = "jorbles";
  unsigned char g[15] = "gargling";
  strcat(g,j);
  printf("%s\n", g);
  return 0;
}
