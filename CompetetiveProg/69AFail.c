/*Young Physicist problem in CF found here:
https://codeforces.com/problemset/problem/69/A
cosa ho imparato ? 
FUCK ARRAYS ed il loro scorrimento (sinceramente!!)
An intro to a better idea can be found here:
https://codespathshala.com/codeforces-69a/
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, row, val, somma = 0;
    scanf("%d", &row);
    /*row: il numero di vettori preso dal input n*/
    /*col: 3 dato che è un vettore*/
    int v[row][3];
   

  // printf("%d", sizeof(v)); // ha senso dato che l'array è int*int

    for(i=0; i<row; i++){
        printf("vedi qua: %d --> ", row);
        for(j=0; j<3; j++){
            scanf("%d", &val);
            v[i][j] = val; // il trucco sta qui Madonna santa!!
        }
    }
/*this displays what the matrix looks like*/
    // for(i=0; i<row; i++){
    //     for(j=0; j<3; j++){
    //         printf("%d ", v[i][j]);
    //     }
    // }

    for(i=0; i<row; i++){
        for(j=0; j<3; j++){
            somma = somma + v[j][i];
        }
      printf("%d\n", somma);
    }
  


 
}