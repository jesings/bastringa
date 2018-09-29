#include <stdio.h>
#include <stdlib.h>
int strlen( char * mystr){
    if(mystr[0]) return 0; else return 1+strlen(++mystr);
}
char* strcat(char* dest,char* source){
    const int len1 = strlen(dest);
    for(int i = 0;source[i];i++){
        dest[i+len1] = source[i];
    }
    return dest;
}
int strcmp(char* s1, char* s2){
    int i = 0;
    for(;s1[i];i++){
        if(!s2[i]) return 1; 
        if(s1[i]>s2[i]) return 1;
        else if(s1[i]<s2[i]) return -1;
    }
    return !s2[i]?0:-1;
}
char* strstr(char *s1,char *s2){
    for(int i=0;s1[i];i++){
        rejecting_state:
        for(int j=0;s2[i];j++){
            if(s1[i+j]!=s2[j]){
                i++;
                goto rejecting_state;
            }
        }
        return s1+i;
    }
    return NULL;
}
