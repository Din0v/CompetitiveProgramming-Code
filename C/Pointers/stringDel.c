 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

 char* parentesi( char *s ) {
    bool keep = false;
    char * c = (char*) malloc ( strlen(s) + 1 );
    if (!c) exit(EXIT_FAILURE);
    char * dest = c;

    while (*s) {
        if ( *s=='(' )
            keep = true;
        else if ( *s==')' )
            keep = false;
        else if (keep)
            *(dest++) = *s;
        s++;
    }

    *(dest++) = '\0';
    c = realloc (c, dest-c);
    return c;
 }

 int main(){
    
 }