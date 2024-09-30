#include <stdio.h>

// 6 cicli for per questo esercizio.
// 4 variabili nella funzione di esecuzione e 2 variabili in input ( dalla main )
//

void chessboard( int N, int lato) // è una funzione che prende due paramentri (interi) e restituisce la scacchiera. perciò uso void.
{
    int riga, colonna, c, r; // tutte le variabili 
    
    for (riga = 0; riga<N; riga++)
    {
        printf("+");// stampa + sul angolo  
        for(c=0; c<N*lato-1; c++){ // stampa la prima riga di trattini, aka il bordo superiore, il -1 è li perchè averamo il simbolo + "Decorativo"
            printf("-"); // cosa deve stampare il ciclo 
        }
        printf("+"); // termina l'angolo del destro della scacchiera
        printf("\n"); // next line.
        
        for (r=1; r<lato; r++){ // sempre restando nell ciclo che ha
        printf("|"); 
            for (colonna=0; colonna<N; colonna++){  // it's A NESTED LOOOOOP
                for(c=0; c<lato-1; c++){ //logica per stampare il cancelleto, Tacchino tacchino tacchino ( publicità di quando lo taglia )
                if ((riga + colonna)%2==0)  // solo sui "numeri pari"
                    printf("#");
                else
                    printf(" "); // se dispari stampa uno spazio " " 
            }
            printf("|"); // perchè e dove si manifesta il -1 nella condizione del ciclo. 
        }
        printf("\n"); 
    }

    printf("+");
    for(c=0; c<N*lato-1; c++)
        printf("-");
    printf("+");
    printf("\n");

 }
}

int main(){
    chessboard(2,2);
    return 0;
}