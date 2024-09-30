/*CF problem 133A the joke programming language found here:
https://codeforces.com/problemset/problem/133/A

perchè non abbiamo incluso il carattere '+' nella condizione ? 
è qui che sta il fallo nella mia prima implementazione!
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, n, res = 0;
    char s[103];

    fgets(s, 102, stdin);
    n = strlen(s);
 //   printf("%d", n);

    for(i=0; i<n-1; i++){
        if(s[i]=='H' || s[i]== 'Q' || s[i]=='9'){
            res++;
        }
    }
    if(res>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
} 