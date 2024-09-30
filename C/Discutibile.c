/*Il problema con questo programma che nonstante il fatto che funzioni 
ma viola un principio fondamentale della ricorsione e della induzione matematica,
cio'è il fatto che ogni chiamata deve essere più piccola di quella precedente!!
Ma communque il programma funziona....
questo programma sta andando in overflow data che sto ricavando di valori negativi dopo una 
divisione...
*/

# include <stdio.h>

long long puzzle(long long N ){
    printf(" %d", N);
    if (N == 1) return 1;
    if (N % 2 == 0) {
        return puzzle(N/2);
    }
    else return puzzle (3*N+1);
    printf("%d", N);
}

int main(){

    printf("\nSi risolve ad [%d]", puzzle(99999999));
}