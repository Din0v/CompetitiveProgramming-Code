/*CF problem 520A Pangram to solve found here:
https://codeforces.com/problemset/problem/520/A
cosa ho imparato ? */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    int i, n;
    char Pan[101];

    scanf("%d", &n);

    if(n<26){
        printf("toosmallword");
    }

    else if(n>=26){
        scanf("%s", &Pan);
        int l = strlen(Pan);

        for(i=0; i<l; i++){
            Pan[i] = toupper(Pan[i]);
        }

        
        printf("%s", Pan);
    }
}