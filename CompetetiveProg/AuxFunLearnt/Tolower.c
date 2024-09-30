/*this is an exercise to understand how to implement to lower or to upper in c 
in correlation with codeforeces 112A problem (petya strings)*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char string1[100];
    char string2[100];

    scanf("%[^\n]s", string1);
    printf("L'output è: %s \n", string1);

    for(int r=0;r<strlen(string1);r++){
    string1[r]=tolower(string1[r]);
    }
    printf("%s\n", string1);

}