/*CF problem of lineLand found here:

cosa ho imparato ?
questo è il primo esercizio che risolvo molto ma molto velocemente!!*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int i;
    int loc[4];
    for(i=0; i<3; i++){
        scanf("%d", &loc[i]);
    }

    int t, j;
    for(i=0; i<3; i++){
        for(j=i+1; j<3; j++){
            if(loc[j]<loc[i]){
                t = loc[i];
                loc[i] = loc[j];
                loc[j] = t;
            }
        }
    }

    int final;

    final = abs(loc[0]-loc[1]) + abs(loc[1]-loc[2]);

    // for(i=0; i<3; i++){
    //     printf("%d\n", loc[i]);
    // }

   printf("%d", final);
}