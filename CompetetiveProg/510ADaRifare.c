/* Esercizio 510A Di CF Si trova qui:
https://codeforces.com/problemset/problem/510/A
ed è comunque da rifare e riImplementare!*/
#include <stdio.h>
int r,c,i,j;
int main(){
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        if(i%2==0 || (i%4==1&&j==c-1)||(j==0&&i%4==3))
            printf("#");
        else printf(".");
    printf("\n");
    }
}