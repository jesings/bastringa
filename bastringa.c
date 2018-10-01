#include <stdlib.h>
#include <stdio.h>
#include "bastrlib.h"
#include <string.h>
int main(){
  printf("Default functions:\n");
  unsigned char b[16] = "lost my ";
  unsigned char g[16] = "lost my ";
  unsigned char j[16] = "marbles";
  printf("g is %s, and j is %s\n",g,j);
  strcat(g,j);
  printf("g and j concatenated is %s\n", g);
  printf("changing g to \"lost my losbles\": %s\n",strncpy(g + 8, b, 3)-8);
  printf("g is %ld characters long\n", strlen(g));
  printf("checking whether g or j is alphanumerically first: %d\n",strcmp(g,j));
  printf("checking whether j or g is alphanumerically first: %d\n",strcmp(j,g));
  printf("checking whether j or \"marbles\" is alphanumerically first: %d\n",strcmp(j,"marbles"));
  char* pnotyeti = strchr(j,'b');
  printf("checking location of \"b\" within j %lx\n",(unsigned long)pnotyeti);
  printf("checking value at that address in j: %c\n",*pnotyeti);
  char* pnotyet = strstr(g,"my");
  printf("checking location of \"my\" within g %lx\n",(unsigned long)pnotyet);
  printf("checking value at that address in g: %c%c\n",*pnotyet,*(pnotyet+1));


  printf("\n\n\nOur own functions:\n");
  bastrncpy(b,"lost my ", 10);
  bastrncpy(g,"lost my ", 10);
  bastrncpy(j,"marbles", 10);
  printf("g is %s, and j is %s\n",g,j);
  bastrcat(g,j);
  printf("g and j concatenated is %s\n", g);
  printf("changing g to \"lost my losbles\": %s\n",bastrncpy(g + 8, b, 3)-8);
  printf("g is %d characters long\n", bastrlen(g));
  printf("checking whether g or j is alphanumerically first: %d\n",bastrcmp(g,j));
  printf("checking whether j or g is alphanumerically first: %d\n",bastrcmp(j,g));
  printf("checking whether j or \"marbles\" is alphanumerically first: %d\n",bastrcmp(j,"marbles"));
  pnotyeti = bastrchr(j,'b');
  printf("checking location of \"b\" within j %lx\n",(unsigned long)pnotyeti);
  printf("checking value at that address in j: %c\n",*pnotyeti);
  pnotyet = bastrstr(g,"my");
  printf("checking location of \"my\" within g %lx\n",(unsigned long)pnotyet);
  printf("checking value at that address in g: %c%c\n",*pnotyet,*(pnotyet+1));
  return 0;
}
