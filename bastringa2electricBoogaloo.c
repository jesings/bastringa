#include <stdio.h>
#include <stdlib.h>

char* strncpy(char* dest, char* source, int n) {
  int i;
  for (i=0; i<n && dest[i]; dest[i++] = source[i]);
  for (; i<n; dest[i++] = 0);
  return dest;
}

char* strchr(char* s, char c) {
  while (*s != c && *s++);
  return *s ? s : NULL;
}
