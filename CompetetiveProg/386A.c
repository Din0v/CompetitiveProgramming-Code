/*CF problem 386A di 800 punti si trova qui: 
https://codeforces.com/problemset/problem/386/A


prima volta che uso i Struct in un modo effettivo !!
*/

#include <stdio.h>

typedef struct {
    int maxElement;
    int maxIndex;
} MaxElementResult;


// abbiamo definito una funzione con un nuovo TIPO
MaxElementResult findMaxElement(int arr[], int size) {
    MaxElementResult result;
    result.maxElement = arr[0];
    result.maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > result.maxElement) {
            result.maxElement = arr[i];
            result.maxIndex = i;
        }
    }

    return result;
}

// una funzione che calcola l'elemento penultimo elemento più grande
// lo fa facendo backtracking sul indice indicato 
// potevo usare la struttura di prima per snellire il codice :)


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap elements if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];  // variabile temporanea 

                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void SecondBidder(int NumberOfBidders){

    int bidValue[1001];
    int i;

    for(i=0; i< NumberOfBidders; i++){
        scanf("%d", &bidValue[i]);
    }

    MaxElementResult result = findMaxElement(bidValue, NumberOfBidders);

    printf("%d ", result.maxIndex+1);

    bubbleSort(bidValue, NumberOfBidders);
    
    printf("%d", bidValue[NumberOfBidders-2]);

}


int main(){
    int n; 
    scanf("%d", &n);
    SecondBidder(n);
}