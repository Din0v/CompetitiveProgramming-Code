/*this is the solution for the 263A problem in code forces
https://codeforces.com/problemset/problem/263/A
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, j, x, y;

    int a[5][5];

    // la formula per prendere la matrice in input!
    for(i=0; i<5; i++) //itera le righe
        for(j=0; j<5; j++) // itera le colonne
            scanf("%d", &a[i][j]);

    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            if(a[i][j]==1){
                x=i; // attenzione a non farle a rovescio!!
                y=j;
            }
    
    printf("%d\n",(abs(x-2)+abs(y-2)));
    // int moves = (x-2)+(y-2);
    // if(moves < 0)
    //     {moves = moves * -1;}
    // printf("%d", moves);
}