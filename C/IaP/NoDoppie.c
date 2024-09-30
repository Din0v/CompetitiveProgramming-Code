#include <stdio.h>
#include <string.h>

void clean(char* input, char* output) {
    int length = strlen(input);
  
    int indiceNew = 0;
    
    for (int i = 0; i < length; i++) {
        // Se il carattere corrente è diverso dal carattere precedente, lo aggiungiamo all'output

        if (i == 0 || input[i] != input[i - 1]) {
          
            output[indiceNew] = input[i];
           
            indiceNew++; // è u semplice contatore
        }
    }
    
    // Aggiungiamo il carattere terminatore alla fine della nuova stringa

    output[indiceNew] = '\0'; // per i nuovi compilatori non serve 
}

int main() {
    char input[] = "ccccccassaa";
    char output[256];  // Assumiamo una lunghezza massima di 256 per l'output, e dove andrà la nuova stringa a memorizzarsi.
    //al momento di esecuzione è vuonta e viene pololata dal ciclo 
    
    clean(input, output);
    
    printf("%s\n", input);
    printf("%s\n", output);

    
    return 0;
}
