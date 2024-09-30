#include <stdio.h>
#include <stdlib.h> // ci serve per usare l'opertore sizeof

int main (void){

    int r=3, c=4;

    int* ptr = malloc((r*c) * sizeof(int)); /* vei malloc prende UN parametro quanta memoria vuoi allocare ciccio ?? 
    ed appunto 4 per 3 + la dimensione del int! */

    for (int i=0; i<r*c; i++)
        ptr[i] = i + 1;


    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            printf("%d", ptr[i*c+j]);
        printf("\n");
    }
    free(ptr); 
    
    return 0;
}