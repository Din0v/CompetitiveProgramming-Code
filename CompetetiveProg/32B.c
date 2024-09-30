/*CF problem found here:
https://codeforces.com/problemset/problem/32/B
Cosa ho imparato ?
che certe cose non vanno prese seriamente...
*/

#include <stdio.h>
#include <string.h>

int main(){

    int i;
    char x[200];
    scanf("%s",x);
    for (i=0;i<strlen(x);i++){
        if (x[i] == '.' ) printf("0");
        if ((x[i] == '-') && (x[i+1] == '.' )) {printf("1");i++;}
        if ((x[i] == '-') && (x[i+1] == '-' )) {printf("2");i++;}
    }
}