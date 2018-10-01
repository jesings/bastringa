#include <stdio.h>
#include <stdlib.h>

int strlen( char* mystr){
  return *mystr ? 1 + strlen(++mystr) : 0;
}
char* strcat(char* dest, char* source){
  int len1 = strlen(dest);
  for(;*source; dest[len1++] = *source++);
  dest[len1] = 0;
  return dest;
}
int strcmp(char* s1, char* s2){
  for(;*s1 && *s1==*s2; s1++,s2++);
  return (unsigned char)*s1 - (unsigned char)*s2;
}
char* strstr(char* s1, char* s2){
  for(;*s1;s1++)
    for(int i=0;s1[i]==s2[i];i++)
      if(!s2[i+1])
	return s1;
  return NULL;
}
char* strncpy(char* dest, char* source, int n) {
  int i;
  for (i=0; i<n && source[i]; dest[i] = source[i], i++);
  for (; i<n; dest[i++] = 0);
  return dest;
}
char* strchr(char* s, char c) {
  while (*s != c && *s++);
  return *s ? s : NULL;
}
