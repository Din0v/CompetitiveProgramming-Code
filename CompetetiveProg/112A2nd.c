/*second attempt with neater and cleaner approach to 112A petya problem
here i go again: 
this implementation seems to work fine 
the only difference from the previous attempt is that i used fgets instead of scanf and that seem to have solved the issue that to this moment i don't know.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char stringA[105]; // nota bene la memoria allocata deve essere leggermente più grande per garantire che il programma funzioni bene!! trick learned from besher!
    char stringB[105];

    fgets(stringA, 103, stdin);
    fgets(stringB, 103, stdin);

    for(int q=0;q<strlen(stringA);q++) {
        stringA[q]=tolower(stringA[q]);
        }

    for(int q=0;q<strlen(stringB);q++) {
        stringB[q]=tolower(stringB[q]);
        }

   // printf("1: %s", stringA);
   // printf("2: %s", stringB);
    
    //printf("compare: %d", strcmp(stringA, stringB));

    int res = strcmp(stringA, stringB);
    if( res == 0){
        printf("0 \n");
    }
    else if (res > 0){
        printf("1 \n");
    }
    else{
        printf("-1 \n");
    }
}