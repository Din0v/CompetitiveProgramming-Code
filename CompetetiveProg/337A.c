/*Cf problem si trova qui:
https://codeforces.com/problemset/problem/337/A
Algoritmo Tirchio Genovese.
Gestione di coppie e numeri ? 
Cosa Ho imparato ?
1. per prima cosa significa il const void ( vedi appunti obsidian)
2. poi che stdlib può incovare un quick sort
3. 

*/


# include <stdio.h>
# include <stdlib.h>

int Confronta(const void *x, const void *y){
	return  *(int*)x  -  *(int*)y ;   // attenzione al segno LMAO ho perso tempo prezionso perche mi sono auto Trollato -_-
}

int main(){
    int n, m, i;
    scanf("%d %d\n", &n, &m);
    int Puzzles[m];

   // printf("%d, %d\n", n, m);

    for(i=0; i<m; i++){
        scanf("%d", &Puzzles[i]); // NON DIMENTACARE L'AMPERSAND PORCA MISERIA.

    }
    qsort(Puzzles, m, sizeof(int), Confronta);

    // for(i=0; i<m; i++){
    //     printf("%d ", Puzzles[i]);
    // }

    printf("\n");
  
    int MinDifferenza = 1000; // dalla limite imposto nel problema.
	for(i=0; i<m-n+1;i++){
        MinDifferenza = MinDifferenza<Puzzles[i+n-1]-Puzzles[i] ? MinDifferenza : Puzzles[i+n-1]-Puzzles[i];
    }
	printf("%d",MinDifferenza);

    


}

