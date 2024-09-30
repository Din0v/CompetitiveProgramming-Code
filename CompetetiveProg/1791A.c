/*CF problem 1791A.c trovato qui:
https://codeforces.com/problemset/problem/1791/A
*/


#include <stdio.h>

void solution (char s){
    char codeforces[] = "codeforces";
    int i; 
    for(i=0; i<9; i++)
    if(char s != codeforces[i]);
    printf("YES");

}

int main(){
    char s;
    int n; 
    scanf("%d", &n);

    while(n--){
        scanf("%s", s);
        solution(s)
    }


}